#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int n ;
    cin >> n ;
    int space = n/2 , k = 1;

    for(int i=0 ; i<n ; i++){
        if(i<n/2){
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
         if(i==n/2){
             for(int j=0 ; j<k ; j++){
                cout << "*" ;
             }
         k-=2;
        space++;
        cout << endl ;
        }
        if(i>n/2){
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
        k-=2;     
        space++;
        }

        
    }

    return 0;
}