#pragma once
#include "Figure.h"

class Circle :
    public Figure
{
private:
    double radius;
public:
    Circle();
    Circle(std::vector<int>, Colours, double);
    Circle(Circle&);

    void set_radius(double);
    double get_radius();
    double area();
    void otherFigure();
};

