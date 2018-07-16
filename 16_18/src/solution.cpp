#include "solution.h"
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;

bool isEqual(const string& value, int s1, int s2, int len){
    for(int i = 0 ; i < len; i++){
        if( value[s1+i] != value[s2+i]){
            return false;
        }
    }
    return true;
}

bool isEqualBase(const string& value, const string& base, int s){
    for(int i = 0 ; i < (int)base.size(); i++){
        if( value[s+i] != base[i]){
            return false;
        }
    }
    return true;
}


bool patterMatching(const string& pattern, const string& value){
    int n = static_cast<int>(value.size());

    int numa = 0 , numb = 0;
    for(auto i : pattern){
        if(i == 'a'){
            numa++;
        }
        if(i == 'b'){
            numb++;
        }
    }
    cout << "numa/b : " << numa << " " << numb << endl;

    vector<int> lena, lenb;

    if(numa != 0 and numb != 0){
        for(int i = 1; i < n ; i++){
            if ( n - i*numa < 0){
                break;
            } 
            if( (n - i*numa)% numb == 0){
                lena.push_back(i);
                lenb.push_back( (n-i*numa)/numb);
                cout << "pair : " << lena.back() << " " << lenb.back() << endl;
            }
        }
    }
    else if ( numa == 0){
        if ( n % numb == 0){
            lenb.push_back(n / numb);
            lena.push_back(0);
        }
    }
    else if( numb == 0){
        if ( n % numa == 0){
            lena.push_back(n / numa);
            lenb.push_back(0);
        }
    }

    for( int i = 0 ; i < (int)lena.size() ; i++){
        string a, b;
        bool isAcaught = false, isBcaught = false;
        int index = 0;
        bool mismatch = false;
        for(auto j : pattern){
            if(j == 'a'){
                if(!isAcaught){
                    a = value.substr(index, lena[i]);
                    isAcaught = true;
                }
                else{
                    if(!isEqualBase(value,a,index)){
                        mismatch = true;
                        break;
                    }
                }
                index += lena[i];
            }
            else if ( j == 'b'){
                if(!isBcaught){
                    b = value.substr(index, lenb[i]);
                    isBcaught = true;
                }
                else{
                    if(!isEqualBase(value,b,index)){
                        mismatch = true;
                        break;
                    }
                }
                index += lenb[i];
            }
        }
        cout << "a = " << a << " b = " << b << endl;
        if( !mismatch ){
            return true;
        }
    }
    return false;
}