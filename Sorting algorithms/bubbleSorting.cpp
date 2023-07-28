#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int numbers[10] = {2,6,5,8,9,1,3,4,7,0};

    for(int i = 0 ; i<10 ; i++){
        for(int j=i ; j<10 ; j++){
            if(numbers[i]>numbers[j]){
                int swap = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = swap;
            }
        }
    }

    for(int i=0 ; i<10 ; i++){
        cout << numbers[i] << " " ;
    }
    cout << endl ;
}