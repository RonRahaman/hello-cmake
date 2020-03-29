project(step_05 C)

set(CMAKE_C_STANDARD 99)

if (CMAKE_C_COMPILER_ID STREQUAL GNU)
    add_compile_options(-fopt-info-optall)
elseif (CMAKE_C_COMPILER_ID STREQUAL Clang)
    add_compile_options(-Rpass=.*loop.*)
elseif (CMAKE_C_COMPILER_ID STREQUAL AppleClang)
    add_compile_options(-Rpass=.*loop.*)
elseif (CMAKE_C_COMPILER_ID STREQUAL Intel)
    add_compile_options(-qopt-report-stdout)
endif ()

add_executable(vector_test main.c)
