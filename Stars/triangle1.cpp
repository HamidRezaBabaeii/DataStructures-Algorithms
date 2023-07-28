#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n=0;
    cin >> n;
    int space = n/2;
    int k = 1;

    for(int i=0 ; i<=n/2; i++){
            for(int j=0 ; j< space ; j++){
                cout << " ";
            }
            for(int j=0 ; j<k ; j++){
                cout << "*";
            }
            for(int j=0 ; j< space ; j++){
                cout << " ";
            }
            cout << endl ;
        k+=2;
        space--;
    }
}