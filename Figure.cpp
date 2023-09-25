#include "Figure.h"
#include <iostream>

Figure::Figure() {
	coordinates = { 0, 0 };
	colour = none;
}

Figure::Figure(std::vector<int> coor, Colours col) {
	coordinates.resize(2);
	coordinates[0] = coor[0];
	coordinates[1] = coor[1];
	colour = col;
}

Figure::Figure(Figure& fig) {
	coordinates.resize(2);
	coordinates[0] = fig.coordinates[0];
	coordinates[1] = fig.coordinates[1];
	colour = fig.colour;
}

void Figure::set_colour(Colours col) {
	colour = col;
}

Colours Figure::get_colour() {
	return colour;
}

void Figure::set_coordinates(std::vector<int> coor) {
	coordinates[0] = coor[0];
	coordinates[1] = coor[1];
}

std::vector <int> Figure::get_coordinates() {
	return coordinates;
}