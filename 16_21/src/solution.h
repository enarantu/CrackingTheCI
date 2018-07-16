#include <vector>

struct Pair{
    int e1;
    int e2;
    bool operator==(const Pair& p){
        return p.e1 == e1 and p.e2 == e2;
    }
};

Pair sumSwap(std::vector<int> v1, std::vector<int> v2);