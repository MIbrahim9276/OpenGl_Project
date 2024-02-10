#include <input.hpp>

Input::Input(GLFWwindow* window): _window(window) {
    glfwSetKeyCallback(_window, key_callback);
}

