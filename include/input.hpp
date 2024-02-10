#pragma once

#include <GLFW/glfw3.h>

class Input {
    public:
      Input(GLFWwindow* window);
    private:
        GLFWwindow* _window;
};

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);