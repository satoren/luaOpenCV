cmake_minimum_required(VERSION 2.8)
project(luaOpenCV LANGUAGES CXX)



option(BUILD_TESTS "Builds the unit test" TRUE)
option(LOCAL_LUA_DIRECTORY "local lua library directory" "lua-5.3.3")
set(LOCAL_LUA_DIRECTORY "lua-5.3.3")

include(cmake/FindLua.cmake)

set(CMAKE_PREFIX_PATH third_party/opencvlib)
FIND_PACKAGE(OpenCV 3.1.0 REQUIRED)

include_directories(BEFORE ${LUA_INCLUDE_DIRS})
link_directories(${LUA_LIBRARY_DIRS})

include_directories(third_party/kaguya/include)
include_directories(BEFORE ${OpenCV_INCLUDE_DIRS})


if(MSVC)
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj")
else(MSVC)
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif(MSVC)

add_library(cv SHARED src/raw_bind.cc)
target_link_libraries(cv ${OpenCV_LIBS} ${LUA_LIBRARIES})



if(BUILD_TESTS)
  enable_testing()

  include_directories(third_party/googletest/googletest/include)
  include_directories(third_party/googletest/googletest/)
  set(GTEST_SRCS third_party/googletest/googletest/src/gtest-all.cc)
  add_executable(test_runner ${GTEST_SRCS} src/raw_bind.cc 
    test/test_main.cc
    test/test_mat.cc
    test/test_draw.cc)
  target_link_libraries(test_runner ${OpenCV_LIBS} ${LUA_LIBRARIES})
  add_test(NAME cvbind_test COMMAND test_runner)

endif(BUILD_TESTS)