#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int numbers[10] = {2,6,5,8,9,1,3,4,7,0};
    int k = 0;
    for(int i=1 ; i<10 ; i++){
        k=i;
        for(int j=k-1 ; j>=0 ; j--){
            if(numbers[k]<numbers[j]){
                int swap = numbers[k];
                numbers[k] = numbers[j];
                numbers[j] = swap;
                k--;
            }
        }
    }
    for(int i=0 ; i<10 ; i++){
        cout << numbers[i] << " " ;
    }
    cout << endl ;
    return 0 ;
}