#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n=5 ;
    int k = 1;
    for(int i=n ; i>=1 ; i--){
        for(int j=1;j<i;j++){
            cout << " ";
        }
        for(int j=1 ; j<=k ; j++){
            cout << "*";
        }
        cout << endl;
        k++;
    }
}