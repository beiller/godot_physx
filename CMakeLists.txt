cmake_minimum_required (VERSION 3.5)
project (PhysX_Standalone_Snippet)

option(PHYSX_BUILD_TYPE "The build type of PhysX, i.e., one of {debug, checked, profile, release}" "checked")

set(PHYSX_ROOT_DIR "PhysX/physx")

include_directories(PhysX/physx/include)

message("Building snippet in debug configuration")
add_compile_definitions(_DEBUG)

message("${PHYSX_ROOT_DIR}/bin/linux.clang/release")

link_directories("${PHYSX_ROOT_DIR}/bin/linux.clang/checked") # This is the path where PhysX libraries are installed

#else()
#    message("Building snippet in release configuration with PhysX ${PHYSX_BUILD_TYPE} configuration")
#    add_compile_definitions(NDEBUG)
#    link_directories("PhysX/bin/linux.clang/${PHYSX_BUILD_TYPE}") # This is the path where PhysX libraries are installed
#endif()

add_executable(Snippet
    main.cpp
)

target_link_libraries(Snippet
    PhysXExtensions_static_64
    PhysX_static_64
    PhysXPvdSDK_static_64
    PhysXCommon_static_64
    PhysXFoundation_static_64

    pthread
    dl
)