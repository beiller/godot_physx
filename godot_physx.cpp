#include "godot_physx.h"


int GodotPhyXServer::get_status() const {
    return 0;
}

void GodotPhyXServer::_bind_methods() {
    ClassDB::bind_method(D_METHOD("get_status"), &GodotPhyXServer::get_status);
}

GodotPhyXServer::GodotPhyXServer() {

}
