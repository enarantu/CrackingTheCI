#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){
    assert ( rmax(1,2) == 2);
    assert ( rmax(14, 2) == 14);
    assert ( rmax(18, -2) == 18);
    assert ( rmax(-2, -4) == -2);
    assert ( rmax(1147483647, -1147483647) == 1147483647);
    assert ( rmax(2147483647, -14141414) == 2147483647); 
    return 0;
}