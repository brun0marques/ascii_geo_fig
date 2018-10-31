#ifndef LINE_H
#define LINE_H

#include "geometricfigure.h"

class Line : public GeometricFigure
{
private:

    int x1, y1, x2, y2;

public:

    Line(int _x1, int _y1, int _x2, int _y2);
    void draw(Screen &disp);
};

#endif // LINE_H
