#include "solution.h"
#include <iostream>
#include <cstdlib>

using std::rand;

int rand5(){
    return rand()%5;
}
int rand25(){
    return rand5()*5 + rand5();
}

int rand7(){
    int num = rand25();
    while(num >= 21){
        num = rand25();
    }
    return num%7;
}