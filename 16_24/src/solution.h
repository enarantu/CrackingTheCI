#include <vector>

struct Pair{
    int x;
    int y;
    bool operator==(const Pair& p){
        return p.x == x and p.y == y;
    }
};

void allPairs(std::vector<int>& arr, int s, std::vector<Pair>& pairs);