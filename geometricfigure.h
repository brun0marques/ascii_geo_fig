#ifndef GEOMETRICFIGURE_H
#define GEOMETRICFIGURE_H

#include "screen.h"

class GeometricFigure
{
public:

    virtual void draw(Screen &disp) = 0;
};

#endif // GEOMETRICFIGURE_H
