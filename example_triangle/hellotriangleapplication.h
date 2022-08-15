#define GLFW_INCLUDE_VULKAN
#include "GLFW/glfw3.h"


class HelloTriangleApplication {
public:
    void run();

private:
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
    void createInstance();
    void checkExtensionProperties();

private:
    GLFWwindow* window = nullptr;
    VkInstance instance = nullptr;
};