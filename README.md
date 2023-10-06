EXTREMELY IMPORTANT! THIS IS A WORK IN PROGRESS! ANYTHING CAN CHANGE AT ANY MOMENT WITHOUT ANY NOTICE! USE AT YOUR OWN RISK!

I am not a C++ programmer. This code base is very experimental.

# Badly designed build instructions

Generate build
`cmake .`

Build
`make`

Outputs binary file.

Run
`./Snippet`


# PhysX module for Godot 4+

Very early stages experiment with compiling PhysX and eventually turning it into a "Custom Module" in Godot parlance.

# TODO

- Build with godot 4+

Register this as a shared library as per config files. Insert into a part of the pipeline, one of the following functions:

```
preregister_module_types();
preregister_server_types();
register_core_singletons();
register_server_types();   < --- Interesting
register_scene_types();
EditorNode::register_editor_types();
register_platform_apis();
register_module_types();
initialize_physics();   < --- Interesting
initialize_navigation_server();
register_server_singletons();   < --- Interesting
register_driver_types();
ScriptServer::init_languages();
```

### References

- https://docs.godotengine.org/en/stable/contributing/development/core_and_modules/custom_modules_in_cpp.html

### Other References

- https://docs.godotengine.org/en/stable/tutorials/scripting/gdextension/what_is_gdextension.html
