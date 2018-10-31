#ifndef CIRCLE_H
#define CIRCLE_H

#include "geometricfigure.h"

class Circle : public GeometricFigure
{
private:

    int xc, yc, radius, fillmode;

public:

    Circle(int _xc, int _yc, int _radius, int _fillmode);
    void draw(Screen &t);
};

#endif // CIRCULO_H
