#include <window.hpp>

Window::Window(int width, int height, string name):
  _width(width), _height(height), _name(name) {
    if (!glfwInit()) {
      
    }
  }