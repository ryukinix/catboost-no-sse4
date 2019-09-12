RESOURCES_LIBRARY()

IF(HOST_OS_LINUX)
    DECLARE_EXTERNAL_RESOURCE(EXTERNAL_FLATC sbr:1114870281)
ELSEIF(HOST_OS_DARWIN)
    DECLARE_EXTERNAL_RESOURCE(EXTERNAL_FLATC sbr:1114860371)
ELSE()
    MESSAGE(FATAL_ERROR Unsupported host platfrom for flatc toolchain)
ENDIF()
END()
