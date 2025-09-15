#include "register_types.hpp"

#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>

#include "MyNode/MyNode.hpp"


using namespace godot;

void initialize_my_extension(ModuleInitializationLevel p_level)
{
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE)
    {
        return;
    }
    ClassDB::register_class<MyNode>();
}

void uninitialize_my_extension(ModuleInitializationLevel p_level)
{
    // cleanup if needed
}

extern "C"
{
    GDExtensionBool GDE_EXPORT
    myextension_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address,
                             GDExtensionClassLibraryPtr         p_library,
                             GDExtensionInitialization*         r_initialization)
    {
        GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);

        init_obj.register_initializer(initialize_my_extension);
        init_obj.register_terminator(uninitialize_my_extension);
        init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);

        return init_obj.init();
    }
}
