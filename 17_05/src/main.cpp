#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){
    cout << longestLN("ABABABBBBBAA") << " = 6" << endl;
    cout << longestLN("AABBABAAABABABB") << " = 14" << endl;
    return 0;
}