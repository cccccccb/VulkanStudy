set(APP_NAME "setup")

file(GLOB SRC_FILES *.cpp)

find_package(glfw3 REQUIRED)  # glfw on linux
find_package(PkgConfig REQUIRED) 
pkg_search_module(GL REQUIRED gl)  # find gl library and use glClear function.

add_executable(${APP_NAME} ${SRC_FILES})

target_link_libraries(${APP_NAME} glfw
    ${GL_LIBRARIES}
    )