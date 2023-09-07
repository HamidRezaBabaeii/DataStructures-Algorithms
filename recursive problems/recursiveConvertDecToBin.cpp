#include <iostream>
#include <stdio.h>
#include <sstream>

using namespace std;

string func(int decimal){

    if(decimal == 0) return "";
    stringstream ss;
    string s;
    ss << decimal%2 ;
    ss >> s;
    return func(decimal/2)+s;
}


int main(){

    int decimal;
    cin >> decimal;
    string str ="";
    cout << func(decimal) << endl;

    return 0;
}