#include <iostream>
#include <stdio.h>

using namespace std;

int Prime(int n , int i){
    if(i==1) return 1;
    if(n%i==0) return 0 ;
    return Prime(n , i-1);
}

int main(){
    int n ;
    cin >> n;
    int x = Prime(n, n-1);
    if(x==1){
        cout << n << " is Prime Number ." << endl;
    }else{
        cout << n << " is not Prime Number ." << endl;
    }
    return 0 ;
}