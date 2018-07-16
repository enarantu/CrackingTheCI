#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){
    assert(patterMatching("aabab","catcatgocatgo"));
    assert(patterMatching("ab","catcatgocatgo"));
    assert(!patterMatching("aa","catcatgocatgo"));
    assert(patterMatching("a","catcatgocatgo"));
    assert(patterMatching("b","catcatgocatgo"));
    assert(patterMatching("bbaba","catcatgocatgo"));
    assert(patterMatching("abababab","phaphaphapha"));
    assert(patterMatching("abab","phaphaphapha"));
    assert(patterMatching("aaab","phaphaphapha"));
    assert(patterMatching("baa","phaphaphapha"));
    assert(!patterMatching("aaab","catcatgocatgo")); 
    assert(!patterMatching("aaaaaaaa","catcatgocatgo")); 
    assert(!patterMatching("baba","catcatgocatgo")); 
    
    return 0;
}