#pragma once

#include <common.hpp>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Window {
  private:
    int _width, _height;
    string _name;
    GLFWwindow* _ptr;

    bool init();
  
  public:
    Window(int width, int height, string name);
};