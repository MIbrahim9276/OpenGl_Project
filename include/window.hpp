#pragma once

#include <common.hpp>

class Window {
  private:
    int _width, _height;
    string _name;
    GLFWwindow* _ptr;

    bool init();
  
  public:
    Window(int width, int height, string name);
};