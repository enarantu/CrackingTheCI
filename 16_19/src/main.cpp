#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){

    vector<vector<int>> field;
    vector<int> ponds;
    field = 
    {   
        {0,2,1,0}, 
        {0,1,0,1},
        {1,1,0,1},
        {0,1,0,1}
    };
    pondsizes(field,ponds);
    assert(ponds == vector<int>({2,4,1}));
    ponds.clear();

    field = 
    {   
        {1,0,1,1}, 
        {4,0,2,0},
        {2,0,3,1},
        {1,0,4,0}
    };
    pondsizes(field,ponds);
    assert(ponds == vector<int>({4,1,1}));
    ponds.clear();
    

    field = 
    {   
        {0,1,1,0}, 
        {4,0,2,0},
        {2,1,0,1},
        {0,0,4,0}
    };
    pondsizes(field,ponds);
    assert(ponds == vector<int>({8}));
    ponds.clear();
    
    field = 
    {   
        {0,1,1,1,0,0}, 
        {4,0,2,0,1,1},
        {2,1,0,1,0,1},
        {0,0,4,2,1,0},
        {1,0,1,0,1,1},
        {0,1,0,1,1,1}
    };
    pondsizes(field,ponds);
    assert(ponds == vector<int>({14}));
    ponds.clear();

       field = 
    {   
        {1,1,0,1,0,0}, 
        {4,0,2,0,1,0},
        {2,0,0,1,0,1},
        {1,0,4,2,0,2},
        {1,0,1,0,1,1},
        {1,1,0,1,1,1}
    };
    pondsizes(field,ponds);
    assert(ponds == vector<int>({14}));
    ponds.clear();
    
    return 0;
}