#pragma once
#include <iostream>
#include <vector>
#include <string>

enum Colours {
	red,
	blue,
	green,
	none
};

class Figure
{
private:
	std::vector<int> coordinates;
	Colours colour;
public:
	Figure();
	Figure(std::vector<int>, Colours); 
	Figure(Figure&);

	void set_coordinates(std::vector<int>);
	void set_colour(Colours);
	std::vector<int> get_coordinates();
	Colours get_colour();
};

