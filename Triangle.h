#pragma once
#include "Figure.h"
class Triangle :
    public Figure
{
private:
    double side;
public:
    Triangle();
    Triangle(std::vector<int>, Colours, double);
    Triangle(Triangle&);

    void set_side(double);
    double get_side();
    double area();
    void otherFigure();
};

