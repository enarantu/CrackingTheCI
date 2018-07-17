#include "solution.h"
#include <iostream>
#include <unordered_map>

using std::cout;
using std::endl;
using std::unordered_map;

int longestLN(const std::string& str){
    unordered_map<int,int> earliest;
    earliest[0] = 0;
    int diff = 0, index = 0, mx = 0;
    for(auto c : str){
        index++;
        if(c == 'A'){
            diff ++;
        }
        else if(c == 'B'){
            diff --;
        }
        if(earliest.find(diff) == earliest.end()){
            earliest[diff] = index;
        }
        int len = index - earliest[diff];
        if( mx < len ){
            mx = len;
        }
    }
    return mx;
}