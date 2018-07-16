#include "solution.h"
#include <iostream>
#include <unordered_set>

using namespace std;

Pair sumSwap(std::vector<int> v1, std::vector<int> v2){
    Pair p;
    unordered_set<int> v2hash;
    int sum1 = 0, sum2 = 0;

    for(auto i : v1){
        sum1 += i;
    }
    for(auto i : v2){
        sum2 += i;
    }


    for(auto i : v2){
        v2hash.insert(i);
    }

    for(auto i : v1){
        if(v2hash.find( i - (sum1 - sum2)/2 ) != v2hash.end()){
            p.e1 = i;
            p.e2 = i - (sum1-sum2)/2;
        }
    }
    return p;
}