#include "solution.h"
#include <iostream>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;
using std::sort;

int diff(int a, int b){
    return (a > b) ? (a - b) : (b - a);
}
int smallestDiff(vector<int>& ar1, vector<int>& ar2){
    sort(ar1.begin(),ar1.end());
    sort(ar2.begin(),ar2.end());
    auto it1 = ar1.begin();
    auto it2 = ar2.begin();
    auto x1 = it1;
    auto x2 = it2;
    while(it1 != ar1.end()){
        if(diff(*it2,*it1) < diff(*x1,*x2)){
                x1 = it1;
                x2 = it2;
        }
        while( *it2 < *it1 and it2 < ar2.end()){
            it2++;
            if(diff(*it2,*it1) < diff(*x1,*x2)){
                x1 = it1;
                x2 = it2;
            }
        }
        it1++;
    }
    cout << "the pair : (" <<*x1<<","<<*x2<<")"<<endl;
    return diff(*x1,*x2);
}
