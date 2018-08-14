include_directories(.)

#generate excutable file
#add_executable(GenerateParamsForFiles GenerateParamsForFiles.cpp)
#generate shared library
add_library(zk SHARED GenerateParamsForFiles.cpp)
target_link_libraries(GenerateParamsForFiles snark)
target_include_directories(
        GenerateParamsForFiles

        PUBLIC
        ${DEPENDS_DIR}/libsnark
        ${DEPENDS_DIR}/libsnark/depends/libfqfft
        ${DEPENDS_DIR}/libsnark/depends/libff
)