
cmake_minimum_required(VERSION 3.28)

project(modules-example)

set(CMAKE_CXX_STANDARD 20)

add_executable(demo)
target_sources(demo
    PUBLIC
    src/main.cpp
)
target_sources(demo
  PUBLIC
    FILE_SET all_my_modules TYPE CXX_MODULES FILES
    src/Module.cppm
)
# cmake_minimum_required(VERSION 3.25)
# project(CMakeModuleExample LANGUAGES CXX)
#
# # Specify the C++ standard
# set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_CXX_STANDARD_REQUIRED True)
#
# # Enable the generation of compile_commands.json
# set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
#
# # Define the executable and include both the module and main source files
# add_executable(CMakeModuleExample src/Module.cpp src/main.cpp)
#
# # Ensure the executable target uses the C++20 standard
# target_compile_features(CMakeModuleExample PUBLIC cxx_std_20)
#
# # Apply compiler-specific options for GCC
# if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
#     # For GCC, use the -fmodules-ts flag
#     target_compile_options(CMakeModuleExample PRIVATE -fmodules-ts)
# endif()
#
# cmake_minimum_required(VERSION 3.25)
# project(CMakeModuleExample LANGUAGES CXX)
#
# # Specify the C++ standard
# set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_CXX_STANDARD_REQUIRED True)
#
# # Enable the generation of compile_commands.json
# set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
#
# # Explicitly compile the module first
# add_library(ModuleLib OBJECT src/Module.cpp)
#
# # Ensure ModuleLib is compiled before main.cpp
# add_executable(CMakeModuleExample src/main.cpp)
# add_dependencies(CMakeModuleExample ModuleLib)
#
# # Link the module library to the executable
# target_link_libraries(CMakeModuleExample PRIVATE ModuleLib)
#
# # Apply compiler-specific options for GCC
# if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
#     # For GCC, use the -fmodules-ts flag
#     target_compile_options(ModuleLib PRIVATE -fmodules-ts)
#     target_compile_options(CMakeModuleExample PRIVATE -fmodules-ts)
# endif()
#
#
# # cmake_minimum_required(VERSION 3.25)
# # project(CMakeModuleExample LANGUAGES CXX)
# #
# # # Specify the C++ standard
# # set(CMAKE_CXX_STANDARD 20)
# # set(CMAKE_CXX_STANDARD_REQUIRED True)
# #
# # # Enable the generation of compile_commands.json
# # set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# #
# # set(CMAKE_CXX_SCAN_FOR_MODULES ON)
# #
# #
# # add_library(Module STATIC)
# # target_sources(Module
# #   PUBLIC
# #     FILE_SET cxx_modules TYPE CXX_MODULES FILES
# #     src/Module.cpp
# # )
# #
# # add_executable(CMakeModuleExample src/main.cpp)
# #
# # target_link_libraries(CMakeModuleExample PUBLIC Module)
# #
# # # Ensure the executable target uses the C++20 standard
# # # target_compile_features(CMakeModuleExample PUBLIC cxx_std_20)
# #
# #
# #
# # # Apply compiler-specific options for GCC
# # if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
# #     # For GCC, we need to use the -fmodules-ts flag
# #     target_compile_options(CMakeModuleExample PRIVATE -fmodules-ts)
# # endif()
# #
# # # Include directories (optional if needed)
# # # target_include_directories(CMakeModuleExample PRIVATE ${CMAKE_BINARY_DIR}/src)
