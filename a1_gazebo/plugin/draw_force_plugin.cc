/************************************************************************
Copyright (c) 2018-2019, Unitree Robotics.Co.Ltd. All rights reserved.
Use of this source code is governed by the MPL-2.0 license, see LICENSE.
************************************************************************/

#include <ignition/math/Color.hh>
#include <gazebo/common/Events.hh>
#include <gazebo/msgs/msgs.hh>
#include <gazebo/transport/Node.hh>
#include <gazebo/common/Plugin.hh>
#include <gazebo/common/common.hh>
#include "rclcpp/rclcpp.hpp"
#include "gazebo/rendering/DynamicLines.hh"
#include "gazebo/rendering/RenderTypes.hh"
#include "gazebo/rendering/Visual.hh"
#include "gazebo/rendering/Scene.hh"
#include <boost/bind.hpp>
#include <geometry_msgs/msg/wrench_stamped.hpp>
#include <chrono>
#include <iostream>
using std::placeholders::_1;
namespace ph = std::placeholders;
namespace gazebo
{
    class UnitreeDrawForcePlugin : public VisualPlugin
    {
        public:
        UnitreeDrawForcePlugin():line(NULL){
            //A1_node = rclcpp::Node::make_shared("A1_node");
        }
        ~UnitreeDrawForcePlugin(){
            this->visual->DeleteDynamicLine(this->line);
        }
        //std::shared_ptr<rclcpp::Node> A1_node;

        void Load(rendering::VisualPtr _parent, sdf::ElementPtr _sdf )
        {
            //std::cout << "=====begin run draw plug======" << std::endl;
            this->visual = _parent;
            this->visual_namespace = "visual";
            if (!_sdf->HasElement("topicName")){
                RCLCPP_INFO(rclcpp::get_logger("draw"), "Force draw plugin missing <topicName>, defaults to /default_force_draw");
                this->topic_name = "/default_force_draw";
            } else{
                this->topic_name = _sdf->Get<std::string>("topicName");
                //std::cout << "=== draw topic_name === " << this->topic_name << std::endl;
            }
            if (!rclcpp::ok()){
                int argc = 0;
                char** argv = NULL;
                //rclcpp::init(argc,argv,"gazebo_visual",ros::init_options::NoSigintHandler|ros::init_options::AnonymousName);
                rclcpp::init(argc,argv);
            }

            this->line = this->visual->CreateDynamicLine(rendering::RENDERING_LINE_STRIP);
            this->line->AddPoint(ignition::math::Vector3d(0, 0, 0));
            //this->line->AddPoint(ignition::math::Vector3d(1, 1, 1), common::Color(0, 1, 0, 1.0));
            this->line->AddPoint(ignition::math::Vector3d(1, 1, 1));//gazebo-8 version AddPoint changed
            this->line->setMaterial("Gazebo/Purple");
            this->line->setVisibilityFlags(GZ_VISIBILITY_GUI);
            this->visual->SetVisible(true);

            auto A1_node = rclcpp::Node::make_shared(this->visual_namespace);

            force_sub = A1_node->create_subscription<geometry_msgs::msg::WrenchStamped>(
                        "/visual/"+this->topic_name+"/"+"the_force", 30, std::bind(&UnitreeDrawForcePlugin::GetForceCallback,this , ph::_1));
            this->update_connection = event::Events::ConnectPreRender(boost::bind(&UnitreeDrawForcePlugin::OnUpdate, this));
            RCLCPP_INFO(rclcpp::get_logger("draw"), "Load %s Draw Force plugin.", this->topic_name.c_str());
        }

        void OnUpdate()
        {
            this->line->SetPoint(1, ignition::math::Vector3d(0, 0, 0));
            // std::cout << " === draw OnUpdate 1=== " << std::endl;
        }

        void GetForceCallback(const geometry_msgs::msg::WrenchStamped::UniquePtr msg)
        {
            Fx = msg->wrench.force.x/20.0;
            Fy = msg->wrench.force.y/20.0;
            Fz = msg->wrench.force.z/20.0;
            //std::cout << " === draw CallBack === " << std::endl;
            // Fx = msg.wrench.force.x;
            // Fy = msg.wrench.force.y;
            // Fz = msg.wrench.force.z;
        }

        private:
            std::string topic_name;
            rendering::VisualPtr visual;
            rendering::DynamicLines *line;
            std::string visual_namespace;
            rclcpp::Subscription<geometry_msgs::msg::WrenchStamped>::SharedPtr force_sub;
            double Fx=0, Fy=0, Fz=0;
            event::ConnectionPtr update_connection;
    };
    GZ_REGISTER_VISUAL_PLUGIN(UnitreeDrawForcePlugin)
}
