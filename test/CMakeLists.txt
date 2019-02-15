if(BUILD_TESTS)

  add_library(Catch INTERFACE)
  target_include_directories(Catch INTERFACE ${PROJECT_SOURCE_DIR}/test)

  set(CMAKE_BUILD_TYPE Debug)

  add_library(test_main main.cpp)

  add_executable(test_math.x test_math.cpp)
  target_link_libraries(test_math.x test_main toolbox Catch)

  add_test(Math test_math.x)

endif()
