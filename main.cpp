#include <iostream>
#include <numbers>

int main () {
    double radius{};

    std::cout << "please enter the radius of a circle: ";
    if (!(std::cin >> radius)) {
         std::cerr << "invalid input, please enter a number";
        return 1;
    }
    if (radius < 0) {
        std::cerr << "invalid input, radius cannot be negative";
        return 1;
    }

    const double circumference = 2 * std::numbers::pi * radius;
    const double area = std::numbers::pi * radius * radius;

    std::cout << "area and circumference of the circle:" << "\n"
              << "\tradius = " << radius << "\n"
              << "\tarea = " << area << "\n"
              << "\tcircumference = " << circumference << "\n";

    return 0;
}