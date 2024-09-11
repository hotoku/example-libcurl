add_executable(a.out main.cpp)
add_compile_options(-Wall -Wextra -Wpedantic)
target_link_libraries(a.out curl)
