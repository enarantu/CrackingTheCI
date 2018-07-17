#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){
    assert( add (5 , 5 ) == 10 );
    assert( add ( -5 , 5 ) == 0);
    assert( add ( -100, 15) == -85);
    assert( add (214141123, 1214141123 ) == 214141123 + 1214141123);
    assert( add (1214141123, -1214141123)  == 1214141123 - 1214141123);
    return 0;
}