#include "solution.h"
#include <iostream>
#include <unordered_map>

using std::unordered_map;
using std::vector;

void allPairs(std::vector<int>& arr, int s, std::vector<Pair>& pairs){
    unordered_map<int,int> set_hash;
    vector<bool> used(arr.size(),false);
    int index = 0;
    for(auto i : arr){
        index++;
        set_hash[i] = index;
    }
    index = 0;
    for(auto i : arr){
        if(!used[index]){
            auto it = set_hash.find(s-i);
            if(it != set_hash.end() and !used[it->second]){
                Pair p;
                p.x = i;
                p.y = s - i;
                pairs.push_back(p);
                used[it->second] = true;
            }
            used[index] = true;
        }
        index++;
    }
}