#include "Circle.h"
#include <cmath>

Circle::Circle() : Figure(), radius(0) {}

Circle::Circle(std::vector<int> coor, Colours col, double rad) : Figure(coor, col), radius(rad) {}

Circle::Circle(Circle& c) : Figure(c), radius(c.radius) {}

void Circle::set_radius(double r) {
	radius = r;
}

double Circle::get_radius() {
	return radius;
}

double Circle::area() {
	return this->get_radius() * atan(1) * 4;
}

void Circle::otherFigure() {
	std::cout << "Figure to lead around this figure is a square with side = " << this->get_radius() * 2 << std::endl;
}