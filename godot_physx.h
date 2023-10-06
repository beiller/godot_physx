#ifndef GODOT_PHYSX_H
#define GODOT_PHYSX_H

#include "core/object/ref_counted.h"

class GodotPhyXServer : public RefCounted {
    GDCLASS(GodotPhyXServer, RefCounted);

    int count;

protected:
    static void _bind_methods();

public:
    int get_status() const;

    GodotPhyXServer();
};

#endif