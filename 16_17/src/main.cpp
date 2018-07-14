#include <iostream>
#include <cassert>
#include <vector>

#include "solution.h"

using namespace std;

int main(){
    vector<int> ar = {2, -8 , 3 , -2 , 4 , -10};
    assert(contiguousMax(ar) == 5);

    ar = {1, 3, -2, 5, -1, 7, -16, 1, 3};
    assert(contiguousMax(ar) == 13);

    return 0;
}