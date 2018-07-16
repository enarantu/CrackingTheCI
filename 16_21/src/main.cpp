#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;
    Pair p;

    v1 = {4,1,2,1,1,2};
    v2 = {3,6,3,3};
    p = {1, 3};
    assert(sumSwap(v1,v2) == p);

    return 0;
}