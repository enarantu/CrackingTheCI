#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){
    vector<int> arr;
    int s;
    vector<Pair> pairs;

    arr = {4,2,5,17,52,72,58,12,0,7};
    s = 19;
    
    allPairs(arr,s,pairs);
    for(auto i : pairs){
        cout << i.x << " " << i.y << endl;  // 17 2 ; 12 7
    }
    cout << endl;
    pairs.clear();

    arr = {4,2,5,17,52,72,9,58,12,0,7};
    s = 9;
    
    allPairs(arr,s,pairs);
    for(auto i : pairs){
        cout << i.x << " " << i.y << endl;  // 4 5 ; 0 9 ; 2 7; 
    }
    cout << endl;
    pairs.clear();

    return 0;
}