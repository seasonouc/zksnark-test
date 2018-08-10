include_directories(.)

add_executable(GenerateParamsForFiles GenerateParamsForFiles.cpp)
target_link_libraries(GenerateParamsForFiles snark)
target_include_directories(
        GenerateParamsForFiles

        PUBLIC
        ${DEPENDS_DIR}/libsnark
        ${DEPENDS_DIR}/libsnark/depends/libfqfft
        ${DEPENDS_DIR}/libsnark/depends/libff
)