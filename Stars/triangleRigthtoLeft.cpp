#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n=5 ;
    int k = n;
    for(int i=1 ; i<=n ; i++){
        for(int j=1;j<i;j++){
            cout << " ";
        }
        for(int j=k ; j>=1 ; j--){
            cout << "*";
        }
        cout << endl;
        k--;
    }
}