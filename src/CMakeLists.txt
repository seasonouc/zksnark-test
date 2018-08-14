include_directories(.)

#generate excutable file
#add_executable(GenerateParamsForFiles GenerateParamsForFiles.cpp)
#generate shared library
add_library(zk SHARED com_hanson_test_JoinSplit.cpp)
target_link_libraries(zk snark)
target_include_directories(
        zk

        PUBLIC
        ${DEPENDS_DIR}/libsnark
        ${DEPENDS_DIR}/libsnark/depends/libfqfft
        ${DEPENDS_DIR}/libsnark/depends/libff
)