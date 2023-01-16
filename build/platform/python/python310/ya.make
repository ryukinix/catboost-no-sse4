RESOURCES_LIBRARY()



INCLUDE(${ARCADIA_ROOT}/build/platform/python/resources.inc)

IF (OS_LINUX)
    DECLARE_EXTERNAL_RESOURCE(EXTERNAL_PYTHON310 ${PYTHON310_LINUX})
ELSEIF (OS_DARWIN)
    IF (ARCH_ARM64)
        DECLARE_EXTERNAL_RESOURCE(EXTERNAL_PYTHON310 ${PYTHON310_DARWIN_ARM64})
    ELSEIF(ARCH_X86_64)
        DECLARE_EXTERNAL_RESOURCE(EXTERNAL_PYTHON310 ${PYTHON310_DARWIN})
    ENDIF()
ELSEIF (OS_WINDOWS)
    DECLARE_EXTERNAL_RESOURCE(EXTERNAL_PYTHON310 ${PYTHON310_WINDOWS})
ENDIF()

END()
