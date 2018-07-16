#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){
    int outcomes[7] = {0,0,0,0,0,0,0};
    int numtests = 10000000;
    for(int i = 0 ; i < numtests ; i++){
        outcomes[rand7()]++;
    }
    for(int i = 0 ; i < 7; i++){
        cout << i << " : " << outcomes[i]/(double)numtests<< endl;
    }
    return 0;
}