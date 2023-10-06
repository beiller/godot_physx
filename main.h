void PxSetPhysXGpuProfilerCallback(physx::PxProfilerCallback* profilerCallback) {
	return;
}

bool PxCookTriangleMesh(const physx::PxCookingParams &params, const physx::PxTriangleMeshDesc &desc, physx::PxOutputStream &stream, physx::PxTriangleMeshCookingResult::Enum *condition) {
    return true;
}

//bool PxCookConvexMesh(const physx::PxCookingParams&, const physx::PxConvexMeshDesc&, physx::PxOutputStream&, physx::PxConvexMeshCookingResult::Enum*)
bool PxCookConvexMesh(const physx::PxCookingParams &params, const physx::PxConvexMeshDesc &desc, physx::PxOutputStream &stream, physx::PxConvexMeshCookingResult::Enum *condition) {
    return true;
}

physx::PxHeightField *PxCreateHeightField(const physx::PxHeightFieldDesc &desc, physx::PxInsertionCallback &insertionCallback) {
    return NULL;
}