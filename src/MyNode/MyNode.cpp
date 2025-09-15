#include "MyNode/MyNode.hpp"

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/godot.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

void MyNode::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("say_hello", "msg"), &MyNode::say_hello); //
}

void MyNode::_ready()
{
    set_process(true);
    UtilityFunctions::print("ready!");
}

void MyNode::_process(double delta)
{
    UtilityFunctions::print("Delta time: ", delta);
}