#include <input.hpp>
#include <window.hpp>

Input::Input(GLFWwindow* window): _window(window) {
    glfwSetKeyCallback(_window, key_callback);

}

