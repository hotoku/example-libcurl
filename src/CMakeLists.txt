add_executable(a.out main.cpp)
add_compile_options(-Wall -Wextra -Wpedantic)
add_compile_options(-I/opt/homebrew/opt/curl/include)
target_link_libraries(a.out curl)
