#pragma once

#include <common.hpp>

typedef enum {
  UP, DOWN, LEFT, RIGHT
} InputType;



class Input {
  public:
    Input(GLFWwindow* window);

  private:
    GLFWwindow* _window;
    map<int, InputType> InputMap;
    
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
};
