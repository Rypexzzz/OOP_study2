#include "Square.h"

Square::Square() : Figure(), side(0) {}

Square::Square(std::vector<int> coor, Colours col, double s) : Figure(coor, col), side(s) {}

Square::Square(Square& t) : Figure(t), side(t.side) {}

void Square::set_side(double s) {
	side = s;
}

double Square::get_side() {
	return side;
}

double Square::area() {
	return this->get_side() * this->get_side();
}

void Square::otherFigure() {
	std::cout << "Figure to lead around this figure is a square with bigger side length" << std::endl;
}
