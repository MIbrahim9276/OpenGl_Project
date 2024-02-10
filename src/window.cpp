#include <window.hpp>


Window::Window(int width, int height, const string name):
  _width(width), _height(height), _name(name) {
    if (!glfwInit()) {
      std::cout << "Failed to initialize" << std::endl;
      
    }
    _ptr = glfwCreateWindow(400, 400, "please for the love of god work", NULL, NULL);

    _input.init(_ptr);

    if(_ptr == NULL){
      std::cout << "something went wrong i don't fucking know" << std::endl;
      
    }
    glfwMakeContextCurrent(_ptr);

    while(glfwWindowShouldClose(window)){
      glfwPollEvents();
    }

    glfwDestroyWindow(_ptr);
}