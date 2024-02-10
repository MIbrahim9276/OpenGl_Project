#pragma once

#include <common.hpp>

typedef enum {
  UP, DOWN, LEFT, RIGHT
} InputType;

map<int, InputType> InputMap;

class Input {
    public:
        Input(GLFWwindow* window);
    private:
        GLFWwindow* _window;
        static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
};
