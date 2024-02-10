#include <window.hpp>


Window::Window(int width, int height, const string name):
  _width(width), _height(height), _name(name) {
    if (!glfwInit()) {
      std::cout << "Failed to initialize" << std::endl;
      
    }
    GLFWwindow *window = glfwCreateWindow(400, 400, "please for the love of god work", NULL, NULL);

    if(window == NULL){
      std::cout << "something went wrong i don't fucking know" << std::endl;
      
    }
    glfwMakeContextCurrent(window);

    while(glfwWindowShouldClose(window)){
      glfwPollEvents();
    }

    glfwDestroyWindow(window);

  }