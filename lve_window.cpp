#include "lve_window.hpp"

namespace lve {

LveWindow::LveWindow(int width, int height, std::string name) : width{width}, height{height}, windowName{name} {
    initWindow();
}

LveWindow::~LveWindow() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

void LveWindow::initWindow() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
}

}