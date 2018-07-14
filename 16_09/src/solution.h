#include<iostream>

class Integer{
    int i;
public:
    Integer(int x);
    Integer operator+(const Integer& rhs);
    Integer operator-(const Integer& rhs);
    Integer operator*(const Integer& rhs);
    Integer operator/(const Integer& rhs);
    Integer& operator=(int x);
    Integer& operator=(Integer& rhs);
    bool operator==(const Integer& rhs);
    friend std::ostream& operator<<(std::ostream& os, const Integer& m);   
};

std::ostream& operator<<(std::ostream& os, const Integer& m);