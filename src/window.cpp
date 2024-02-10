#include <window.hpp>
#include <iostream>

Window::Window(int width, int height, string name):
  _width(width), _height(height), _name(name) {
    if (!glfwInit()) {
      std::cout << "Failed to initialize";
      
    }
    GLFWwindow *window = glfwCreateWindow(400, 400, "please for the love of god work", NULL, NULL);

    if(window == NULL){
      std::cout << "something went wrong i don't fucking know";
      
    }
    glfwMakeContextCurrent(window);


    glfwDestroyWindow(window);

  }