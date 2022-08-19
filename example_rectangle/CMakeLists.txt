set(APP_NAME "triangle")

file(GLOB SRC_FILES *.cpp)

find_package(glfw3 REQUIRED)
find_package(PkgConfig REQUIRED)

pkg_search_module(GL REQUIRED gl)
pkg_search_module(VULKAN REQUIRED vulkan)

add_executable(${APP_NAME} ${SRC_FILES})

target_link_libraries(${APP_NAME} glfw
    ${GL_LIBRARIES}
    ${VULKAN_LIBRARIES}
    )