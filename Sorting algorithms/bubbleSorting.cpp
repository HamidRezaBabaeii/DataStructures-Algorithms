#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n ;
    cin >> n;
    int numbers[n];
    for(int i=0 ; i<10 ; i++){
        cin >> numbers[i] ;
    }

    for(int j=1 ; j<=10 ; j++){
        for(int i=1 ; i<10 ; i++){
            if(numbers[i-1]>numbers[i]){
                swap(numbers[i],numbers[i-1]);
            }
        }
    }


    for(int i=0 ; i<10 ; i++){
        cout << numbers[i] << " " ;
    }
    cout << endl ;
}