#include<iostream>
#include<stdio.h>

using namespace std;

int pow(int m,int n){
    if(n==1) return m;
    return pow(m,n-1)*m ;
}

int main(){
    int m , n;
    cin >> m >> n;
    cout << pow(m,n) << endl;
    return 0 ;
}