#include "line.h"

Line::Line(int _x1, int _y1, int _x2, int _y2)
{
    x1 = _x1;
    y1 = _y1;
    x2 = _x2;
    y2 = _y2;
}

void Line::draw(Screen &disp)
{
    int dx = x2 - x1;
    int dy = y2 - y1;
    int D = (2 * dy) - dx;
    int y = y1;

    for (int x = x1; x <= x2; x++)
    {
        disp.setPixel(y,x);
        if (D > 0)
        {
            y = y + 1;
            D = D - (2 * dx);
        }
        D = D + (2 * dy);
    }
}
