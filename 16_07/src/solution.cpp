#include "solution.h"
#include <iostream>

using std::cout;
using std::endl;

int rmax(int a, int b){
    int diff = a - b;
    int sign_d = ((unsigned int)diff) >> 31;
    int sign_a = ((unsigned int)a) >> 31;
    int sign_b = ((unsigned int)b) >> 31;
    return  !( sign_a ^ sign_b)  * ( sign_d*b + !sign_d*a ) + ( sign_a ^ sign_b) * ( !sign_a*a + sign_a*b );
}