#include "rectangle.h"

Rectangle::Rectangle(int _x0, int _y0, int _height, int _width, int _fillmode)
{
    x0 = _x0;
    y0 = _y0;
    height = _height;
    width = _width;
    fillmode = _fillmode;
}

void Rectangle::draw(Screen &disp)
{
    if(fillmode == 1)
    {
        for(int i = y0; i < (y0 + height); i++)
        {
            for(int j = x0; j < (x0 + width); j++)
            {
                disp.setPixel(i,j);
            }
        }
    }
    else
    {
        //this draws a filled rectangle
        for(int i = y0; i < (y0 + height); i++)
        {
            for(int j = x0; j < (x0 + width); j++)
            {
                disp.setPixel(i,j);
            }
        }

        //then empties it
        disp.setBrush(' ');

        for(int i = y0 + 1; i < (y0 + height - 1); i++)
        {
            for(int j = x0 + 1; j < (x0 + width - 1); j++)
            {
                disp.setPixel(i,j);
            }
        }
    }
}
