#include "Triangle.h"
#include <cmath>

Triangle::Triangle() : Figure(), side(0) {}

Triangle::Triangle(std::vector<int> coor, Colours col, double s) : Figure(coor, col), side(s) {}

Triangle::Triangle(Triangle& t) : Figure(t), side(t.side) {}

void Triangle::set_side(double s) {
	side = s;
}

double Triangle::get_side() {
	return side;
}

double Triangle::area() {
	return this->get_side() * this->get_side() * std::sqrt(3) / 4;
}

void Triangle::otherFigure() {
	std::cout << "Figure to lead around this figure is a rectangle" << std::endl;
}