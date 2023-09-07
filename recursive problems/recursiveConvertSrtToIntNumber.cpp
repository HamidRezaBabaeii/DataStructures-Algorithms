#include <iostream>
#include <stdio.h>
#include <sstream>
#include <cmath>
using namespace std;

int func(string str , int n , int m){
    if(n < 0) return 0;

    stringstream s;
    s << str[n];
    int num ;
    s >> num ;
    return func(str,n-1,m)+(num*(pow(10,m-(n+1))));

}


int main(){

    string str ;
    cin >> str ;
    int n = str.length();

    cout << func(str,n-1,n) << endl;

    return 0 ;
}
