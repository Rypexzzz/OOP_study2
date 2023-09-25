#pragma once
#include "Figure.h"
class Rectangle :
    public Figure
{
private:
    double length;
    double width;
public:
    Rectangle();
    Rectangle(std::vector<int>, Colours, double, double);
    Rectangle(Rectangle&);

    double get_length();
    double get_width();
    void set_length(double);
    void set_width(double);

    double area();
    void otherFigure();
};

