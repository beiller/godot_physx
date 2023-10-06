#include "register_types.h"

#include "core/object/class_db.h"
#include "godot_physx.h"

void initialize_godot_physx_module(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
            return;
    }
    ClassDB::register_class<GodotPhyXServer>();
}

void uninitialize_godot_physx_module(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
            return;
    }
   // Nothing to do here in this example.
}
