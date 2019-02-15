
set(header_path ${PROJECT_SOURCE_DIR}/include)

set(header
    ${header_path}/math.hpp)

set(source
    math.cpp
    vector.cpp)

add_library(toolbox ${source})
target_include_directories(toolbox PUBLIC ${header_path})
