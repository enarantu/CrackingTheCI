#include "solution.h"
#include <iostream>
using namespace std;
int trailing0s(int x){
    int exps = 0;
    for(int i = 5 ; i < x ; i *= 5){
        exps += x / i;
    }
    return exps;
}