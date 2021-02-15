cmake_minimum_required(VERSION 3.2)
project(static-vars-static-lib)

if(NOT CMAKE_BUILD_TYPE)
  message(
    STATUS
      "Build type is default defined as Release. change it by define -DCMAKE_BUILD_TYPE=Debug as param to cmake"
  )
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_STANDARD 17)

add_library(singleton_lib STATIC src/singleton_lib.c src/singleton_lib.h)

add_library(singleton_dll SHARED src/singleton_dll.c src/singleton_dll.h)
target_compile_definitions(singleton_dll PRIVATE DLL_EXPORT)
target_link_libraries(singleton_dll singleton_lib)

set(EXE_NAME ${CMAKE_PROJECT_NAME})
add_executable(${EXE_NAME})
target_sources(${EXE_NAME} PRIVATE # cmake-format: sortable
                                   src/Main.cpp)
get_target_property(EXE_FILES ${EXE_NAME} SOURCES)
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${EXE_FILES})
target_link_libraries(${EXE_NAME} singleton_dll singleton_lib ${CONAN_LIBS})
if(WIN32)
  target_compile_definitions(${EXE_NAME} PRIVATE UNICODE _UNICODE)
endif()
