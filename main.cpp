#include <iostream>
#include "screen.h"
#include <vector>
#include "geometricfigure.h"
#include "rectangle.h"
#include "line.h"
#include "circle.h"
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    /*
    int nl = 80;
    int nc = 100;

    Screen ecra(nl, nc);

    ecra.clear();

    Rectangle rect1(1, 1, 20, 35, 0);
    Rectangle rect2(1, 25, 20, 35, 1);

    ecra.setBrush('@');
    rect1.draw(ecra);

    ecra.setBrush('@');
    rect2.draw(ecra);

    Line line1(60, 5, 75, 40);

    ecra.setBrush('#');
    line1.draw(ecra);

    Circle circ(40, 50, 7, 0);

    ecra.setBrush('*');
    circ.draw(ecra);

    cout << ecra;
    */



    ifstream fin;

    fin.open("script.txt");

    if(!fin.is_open())
    {
        cout << "It wasn't possible to open the file!" << endl;
        exit(0);
    }

    string cmd;

    fin >> cmd;

    if(cmd.compare("dim") == 0)
    {
        fin >> nl >> nc;
        Screen tela(nl, nc);
    }






















    return 0;
}
