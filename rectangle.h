#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "geometricfigure.h"

class Rectangle : public GeometricFigure
{
private:

    int x0, y0, height, width, fillmode;

public:
    Rectangle(int _x0, int _y0, int _height, int _width, int _fillmode);
    void draw(Screen &disp);
};

#endif // RECTANGLE_H
