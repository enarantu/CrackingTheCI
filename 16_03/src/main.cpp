#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){
    double x1, y1, x2, y2, x3, y3, x4, y4; 
    x1 = 1;
    y1 = 1;
    x2 = 3;
    y2 = 3;
    x3 = 2;
    y3 = 1;
    x4 = 1;
    y4 = 2;

    assert( intersect(x1,y1,x2,y2,x3,y3,x4,y4));

    x1 = 5;
    y1 = 2;
    x2 = 2;
    y2 = 5;
    x3 = 6;
    y3 = 2;
    x4 = 4;
    y4 = 5;

    assert( !intersect(x1,y1,x2,y2,x3,y3,x4,y4));

    x1 = 5;
    y1 = 2;
    x2 = 2;
    y2 = 5;
    x3 = 7;
    y3 = 2;
    x4 = 4;
    y4 = 5;

    assert( !intersect(x1,y1,x2,y2,x3,y3,x4,y4));


    return 0;
}