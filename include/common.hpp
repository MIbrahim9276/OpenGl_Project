#pragma once

#include <map>
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>


template<typename t, typename k>
using map = std::map<t, k>;
using string = char*;