#include <iostream>
#include <cassert>

#include "solution.h"

using namespace std;

int main(){
    Integer a(5);
    Integer b(6);
    cout << a << " " << b << " " << a + b + a << endl;
    assert( (a + b) == (b + a) );
    b = 11;
    assert( b == (a = b) ) ;

    Integer c(11);
    a = 100;
    b = 89;

    assert( ( a - b ) == c) ;

    a = 12314414;
    b = -13133131;
    c = 12314414 + 13133131;

    assert( (a - b) == c );

    a = -4;
    b = 5;
    c = -20;

    assert( a*b == c);

    a = 4;
    b = -5;
    c = -20;

    assert( a*b == c);

    a = -4;
    b = -5;
    c = 20;

    assert( a*b == c);

    a = 8;
    b = 3;
    c = 2;

    assert( a/b == c);

    a = -9;
    b = 3;
    c = -3;

    assert(a/b == c);

    a = -8;
    b = 3;
    c = -3;

    assert(a/b == c);

    a = -8;
    b = 3;
    c = -3;

    assert(a/b == c);


    a = -8;
    b = 2;
    c = -4;

    assert(a/b == c);


    a = 12;
    b = 4;
    c = 3;

    assert(a/b == c);

    return 0;
}