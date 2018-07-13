#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){
    vector<int> ar1 = {1,2};
    vector<int> ar2 = {5,6};
    assert(smallestDiff(ar1,ar2) == 3 );

    ar1 = {1,3,15,11,2};
    ar2 = {23,127,235,19,8};
    assert(smallestDiff(ar1,ar2) == 3 );

    ar1 = {5000,430, 280 ,2 , 17};
    ar2 = {4800,250, 100 ,1 , 19};
    assert(smallestDiff(ar1,ar2) == 1 );

    ar1 = {1};
    ar2 = {15, 3,23 , 131, 2 , 4 , 14};
    assert(smallestDiff(ar1,ar2) == 1 );


    ar1 = {5, 7, 16 , 1 , 57, 64, 79, 13};
    ar2 = {21, 9 , 45, 61, 76};
    assert(smallestDiff(ar1,ar2) ==  2);

    return 0;
}