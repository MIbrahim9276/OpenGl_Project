#pragma once

#include <common.hpp>
#include <input.hpp>

class Window {
  private:
    int _width, _height;
    string _name;
    GLFWwindow* _ptr;
    Input _input;

    bool init();
  
  public:
    Window(int width, int height, const string name);
};