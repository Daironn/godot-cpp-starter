
#ifndef MY_NODE_HPP
#define MY_NODE_HPP

#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

class MyNode : public Node2D
{
    GDCLASS(MyNode, Node2D);

  protected:
    static void _bind_methods();

  public:
    MyNode() {}
    ~MyNode() {}
    void say_hello(const String& msg)
    {
        UtilityFunctions::print(msg);
    }
    void _ready() override;
    void _process(double delta) override;
};

#endif // MY_NODE_HPP
