#include "solution.h"
#include <iostream>
using namespace std;

bool between ( double x1 , double x2, double x ){
    return (x1 < x and x < x2) or (x2 < x and x < x1);
}

bool intersect(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4){
    if( (y2-y1)*(x4-x3) == (y4-y3)*(x2-x1)){
        cout << "parralell" << endl;
        return false;
    }
    else{
        double k1 = (y2-y1) / (x2-x1);
        double k2 = (y4-y3) / (x4-x3);
        double b1 = y1 - x1*k1;
        double b2 = y3 - x3*k2;
        double x = (b2 - b1)/(k1-k2);
        double y = k1*x + b1;
        cout << "intersection x = " << x << " y = " << y << endl;
        if ( between(x1,x2,x) and between(x3,x4,x)){
            cout << "inside!" << endl;
            return true;
        }
        else{
            cout << "not inside!" << endl;
            return false;
        }
    }
}