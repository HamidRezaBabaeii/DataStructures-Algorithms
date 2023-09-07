#include <iostream>
#include <stdio.h>
#include <sstream>
#include <cmath>
using namespace std;

int func(string str , int n){
    if(n < 0) return 0;
    stringstream s;
    s << str[n];
    int num ;
    s >> num ;
    return func(str,n-1)+num;

}

int main(){
    string str ;
    cin >> str ;
    int n = str.length();
    cout << func(str,n-1) << endl;
    return 0 ;
}
