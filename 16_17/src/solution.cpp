#include "solution.h"
#include <iostream>
#include <algorithm>
using namespace std;


int contiguousMax(vector<int>& ar){
    int smax = 0, sum  = 0;
    for(int i = 0 ; i < (int)ar.size() ; i++){
        sum = (sum + ar[i] < 0 )? 0 : sum + ar[i];
        smax = (smax < sum) ? sum : smax; 
    }
    return smax;
}