#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <vector>

using namespace std;

class Screen
{
private:
    
    int nlin, ncol;
    char brush;
    char display[100][100];

public:
    
    Screen(int _nlin, int _ncol);
    void setPixel(int x, int y);
    void clear();
    void setBrush(char _brush);
    friend ostream& operator<<(ostream &out, Screen &disp);
};

#endif // SCREEN_H
