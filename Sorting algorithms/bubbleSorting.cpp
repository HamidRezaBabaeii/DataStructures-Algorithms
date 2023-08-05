#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int numbers[10] = {2,6,5,8,9,1,3,4,7,0};

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