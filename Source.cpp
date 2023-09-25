#include <iostream>
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {
	std::vector<int> coordinates = { 0, 0 };
	Circle cir(coordinates, red, 10);
	Square sq(coordinates, green, 3.5);
	Rectangle rec(coordinates, red, 5.555, 3.444);
	Triangle tri(coordinates, blue, 2.222);
	std::string command = "";
	while (command != "exit") {
		std::cout << "Input name of the figure or exit to stop program:" << std::endl;
		std::cin >> command;
		if (command == "circle")
			std::cout << "Circle with radius " << cir.get_radius() << ", color red(" << cir.get_colour() << ") has area = " << cir.area() << std::endl;
		else if (command == "square") 
			std::cout << "Square with side " << sq.get_side() << ", color green(" << sq.get_colour() << ") has area = " << sq.area() << std::endl;
		else if (command == "rectangle") 
			std::cout << "Rectangle with sides " << rec.get_length() << " and " << rec.get_width() << ", color red(" << rec.get_colour() << ") has area = " << rec.area() << std::endl;
		else if (command == "triangle") 
			std::cout << "Triangle with side " << tri.get_side() << ", color blue(" << tri.get_colour() << ") has area = " << tri.area() << std::endl;
	}
}

