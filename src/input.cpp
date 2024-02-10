#include <input.hpp>

Input::Input(GLFWwindow* window): _window(window) {
    glfwSetKeyCallback(_window, key_callback);
}

void Input::key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    }
}