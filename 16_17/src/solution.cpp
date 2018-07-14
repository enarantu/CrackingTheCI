#include "solution.h"
#include <iostream>
#include <algorithm>
using namespace std;


int contiguousMax(vector<int>& ar){
    vector<int> dp(ar.size());
    dp[0] = ar[0];
    for(int i = 1 ; i < (int)ar.size() ; i++){
        int bmax = ar[i];
        int sum = ar[i];
        for(int j = i - 1 ; j >= 0 ; j--){
            sum += ar[j];
            if(sum > bmax){
                bmax = sum;
            }
        }
        dp[i] = max(dp[i-1], bmax);
    }
    cout << dp.back() << endl;
    return dp.back();
}