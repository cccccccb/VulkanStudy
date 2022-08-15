#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>  // use glm properties.
#include <glm/mat4x4.hpp>

int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Vulkan window", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    uint32_t extensionCount = 0;

    glm::mat4 matrix;
    glm::vec4 vec;
    auto test = matrix * vec;  // make sure the glm is working.

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Poll for and process events */
        glfwPollEvents();  // dont swap buffer and clear like glfw.
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}