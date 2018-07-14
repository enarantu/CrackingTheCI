#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){
    Ans a;
    a = mastermind("RGBY","GGRR");
    assert(a.hit == 1 and a.phit == 1);

    a = mastermind("RGBY","YBGR");
    assert(a.hit == 0 and a.phit == 4);
    
    a = mastermind("RRRR","RGBR");
    assert(a.hit == 2 and a.phit == 0);
    return 0;
}