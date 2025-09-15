#ifndef MY_EXTENSION_REGISTER_TYPES_H
#define MY_EXTENSION_REGISTER_TYPES_H

#include <godot_cpp/core/class_db.hpp>

void initialize_my_extension(godot::ModuleInitializationLevel p_level);
void uninitialize_my_extension(godot::ModuleInitializationLevel p_level);

#endif // MY_EXTENSION_REGISTER_TYPES_H
