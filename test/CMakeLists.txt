if(BUILD_TESTS)

  add_library(Catch INTERFACE)
  target_include_directories(Catch INTERFACE ${PROJECT_SOURCE_DIR}/test)

  set(CMAKE_BUILD_TYPE Debug)

  set(tests
      main.cpp
      test_math.cpp)

  add_executable(test_toolbox.x ${tests})
  target_link_libraries(test_toolbox.x toolbox Catch)

  add_test(test_toolbox.x test_toolbox.x)

endif()
