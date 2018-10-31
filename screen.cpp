#include <iostream>
#include "screen.h"
#include <vector>

using namespace std;

Screen::Screen(int _nlin, int _ncol)
{
    nlin = _nlin;
    ncol = _ncol;
}

void Screen::setPixel(int x, int y)
{
    display[x][y] = brush;
}

void Screen::clear()
{
    for(int i = 0; i < nlin; i++)
    {
        for(int j = 0; j < ncol; j++)
        {
            display[i][j] = ' ';
        }
    }
}

void Screen::setBrush(char _brush)
{
    brush = _brush;
}

ostream& operator<<(ostream &out, Screen &disp)
{
    for(int i = 0; i < disp.nlin; i++)
    {
        for(int j = 0; j < disp.ncol; j++)
        {
            out << disp.display[i][j];
        }

        out << endl;
    }

    return out;
}
