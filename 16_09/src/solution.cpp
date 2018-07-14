#include "solution.h"
#include <iostream>

using namespace std;

Integer::Integer(int x){
    i = x;
}

Integer Integer::operator+(const Integer& lhs){
    return Integer(i + lhs.i);
}
bool Integer::operator==(const Integer& rhs){
    return i == rhs.i;
}
Integer& Integer::operator=(int x){
    i = x;
    return *this;
}

Integer& Integer::operator=(Integer& rhs){
    i = rhs.i;
    return *this;
}

Integer Integer::operator-(const Integer& rhs){
    return Integer( (~rhs.i + 1) + i );
}

Integer Integer::operator*(const Integer& rhs){
    int m = 0;
    if( rhs.i < 0){
        for(int x = 0 ; x < 0 - rhs.i ; x++){
            m += i;
        }
        return Integer( 0 - m);
    }
    else if (rhs.i == 0){
        return Integer(0);
    }
    else{
        for(int x = 0 ; x < rhs.i ; x ++){
            m += i;
        }
        return Integer(m); 
    }
}

Integer Integer::operator/(const Integer& rhs){
    int x , y , closest = 0, ans = 0;
    x = i;
    y = rhs.i;

    if(x < 0 ){
        x = -x;
    }

    if( y < 0){
        y = -y;
    }


    if ( (rhs.i < 0 and i > 0)  or (rhs.i > 0  and i < 0)){ // different sign
        while( closest < x){
            closest += y;
            ans++;
        }
        return -ans;
    }
    else{
        while( closest < x){
            closest += y;
            ans++;
        }
        if(closest != x){
            ans--;
        }
        return ans;
    }
}

std::ostream& operator<<(std::ostream& os, const Integer& m){
    os << m.i;
    return os;
}

