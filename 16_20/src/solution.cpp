#include "solution.h"
#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;

std::unordered_map<int,std::vector<std::string>> num2words;

int convert2num(char ch){
    if(ch == 'a' or ch == 'b' or ch == 'c'){
        return 2;
    }
    else if(ch == 'd' or ch == 'e' or ch == 'f'){
        return 3;
    }
    else if(ch == 'g' or ch == 'h' or ch == 'i'){
        return 4;
    }
    else if(ch == 'j' or ch == 'k' or ch == 'l'){
        return 5;
    }
    else if(ch == 'm' or ch == 'n' or ch == 'o'){
        return 6;
    }
    else if(ch == 'p' or ch == 'q' or ch == 'r' or ch == 's'){
        return 7;
    }
    else if(ch == 't' or ch == 'u' or ch == 'v'){
        return 8;
    }
    else if(ch == 'w' or ch == 'x' or ch == 'y' or ch == 'z'){
        return 9;
    }
    else{
        return -1;
    }
}
int word2num(string word){
    int num = 0;
    for(auto ch : word){
        num *= 10;
        num += convert2num(ch);
    }
    return num;
}

void preprocess(){
    std::fstream fs;
    fs.open("src/dict.txt", std::ios_base::in);
    string word;
    while( fs >> word){
        num2words[word2num(word)].push_back(word);
    }
    fs.close();
}

void t9(int x){
    for(auto i : num2words[x]){
        cout << i << " ";
    }
    cout << endl;
}