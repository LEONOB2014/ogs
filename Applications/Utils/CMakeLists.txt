add_subdirectory(FileConverter)
add_subdirectory(GeoTools)
add_subdirectory(MeshEdit)
add_subdirectory(SimpleMeshCreation)

if(OGS_BUILD_GUI)
	add_subdirectory(OGSFileConverter)
endif() # OGS_BUILD_GUI
