#pragma once
#include "Figure.h"
class Square :
    public Figure
{
private:
    double side;
public:
    Square();
    Square(std::vector<int>, Colours, double);
    Square(Square&);

    void set_side(double);
    double get_side();
    double area();
    void otherFigure();
};

