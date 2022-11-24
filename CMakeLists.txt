cmake_minimum_required(VERSION 3.21)
project(4lab)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(BookStorage)
add_subdirectory(userMenu)
add_subdirectory(adminMenu)
target_link_libraries(userMenu BookStorage)
target_link_libraries(adminMenu BookStorage)