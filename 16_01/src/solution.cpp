#include "solution.h"
#include <iostream>
using namespace std;

void swap(int& x , int& y){
    x = x ^ y; 
    y = x ^ y;
    x = x ^ y;
}