#include "solution.h"
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

Ans mastermind(const string& sol,const string& guess){
    Ans a;
    a.hit = 0;
    a.phit = 0;
    int h[4] = {0,0,0,0};
    
    map<char, int > g, s;
    
    g['G']  = 0;
    g['R']  = 0;
    g['B']  = 0;
    g['Y']  = 0;
    
    s['G']  = 0;
    s['R']  = 0;
    s['B']  = 0;
    s['Y']  = 0;

    for (int i = 0; i < 4; ++i){
        if(sol[i] == guess[i]){
            h[i]++;
            a.hit++;
        }
        else{
            g[ guess[i] ] ++;
            s[ sol[i] ] ++;
        }
    }

    a.phit += min(g['G'],s['G']);
    a.phit += min(g['R'],s['R']);
    a.phit += min(g['B'],s['B']);
    a.phit += min(g['Y'],s['Y']);
    return a;
}