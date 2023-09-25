#include "Rectangle.h"

Rectangle::Rectangle() : Figure(), length(0), width() {}

Rectangle::Rectangle(std::vector<int> coor, Colours col, double l, double w) : Figure(coor, col), length(l), width(w) {}

Rectangle::Rectangle(Rectangle& r) : Figure(r), length(r.length), width(r.width) {}

void Rectangle::set_length(double l) {
	length = l;
}

void Rectangle::set_width(double w) {
	width = w;
}

double Rectangle::get_length() {
	return length;
}

double Rectangle::get_width() {
	return width;
}

double Rectangle::area() {
	return this->get_length() * this->get_width();
}

void Rectangle::otherFigure() {
	std::cout << "Figure to lead around this figure is a rectangle with bigger sides" << std::endl;
}