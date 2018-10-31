#include "circle.h"
#include "line.h"

Circle::Circle(int _xc, int _yc, int _radius, int _fillmode)
{
    xc = _xc;
    yc = _yc;
    radius = _radius;
    fillmode = _fillmode;
}

void Circle::draw(Screen &t)
{
    int x = radius - 1;
    int y = 0;
    int dx = 1;
    int dy = 1;
    int err = dx - (radius << 1);

    while (x >= y)
    {
        if (!fillmode)
        {
            t.setPixel(xc + x, yc + y);
            t.setPixel(xc - x, yc + y);
        }
        else
        {
            Line ret1(xc - x, yc + y, xc + x, yc + y);
            Line ret2(xc - x, yc - y, xc + x, yc - y);
            ret1.draw(t);
            ret2.draw(t);
        }

        t.setPixel(xc + y, yc + x);
        t.setPixel(xc - y, yc + x);
        t.setPixel(xc - x, yc - y);
        t.setPixel(xc - y, yc - x);
        t.setPixel(xc + y, yc - x);
        t.setPixel(xc + x, yc - y);

        if (err <= 0)
        {
            y++;
            err += dy;
            dy += 2;
        }

        if (err > 0)
        {
            x--;
            dx += 2;
            err += dx - (radius << 1);
        }
    }
}
