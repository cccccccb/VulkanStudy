set(APP_NAME "opengl")

file(GLOB SRC_OPENGL_FILES *.cpp)

find_package(glfw3 REQUIRED)  # glfw on linux
find_package(PkgConfig REQUIRED) 
pkg_search_module(GL REQUIRED gl)  # find gl library and use glClear function.
pkg_search_module(GL REQUIRED glew)

add_executable(${APP_NAME} ${SRC_OPENGL_FILES})

target_link_libraries(${APP_NAME} glfw GLEW
    ${GL_LIBRARIES}
    )