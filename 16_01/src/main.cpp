#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){
    int x , y;

    x = 10000;
    y = 12123;

    swap(x,y);

    assert( x == 12123 and y == 10000);

    cout << "x = " << x << " " << "y = "<< y << endl;

    x = 1491409174;
    y = 1214141123;

    swap(x,y);

    assert( x == 1214141123 and y == 1491409174);

    cout << "x = " << x << " " << "y = "<< y << endl;

    

    return 0;
}