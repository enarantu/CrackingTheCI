#include "solution.h"
#include <iostream>

using std::cout;
using std::endl;

int real_addition(unsigned int x, unsigned int y, unsigned int carry){
    if(x == 0 and y == 0){
        return carry;
    }
    int last_x = x&1, last_y = y&1;
    x = x >> 1;
    y = y >> 1;
    int front = real_addition(x,y, (last_x&last_y) or (carry&last_x) or (carry&last_y));
    return (front << 1)| (last_x ^ last_y ^ carry) ;
}
int add(int x , int y){
    return static_cast<int>(real_addition(static_cast<unsigned int>(x),static_cast<unsigned int>(y),0));
}