#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int nums[10] ={4,1,3,2,9,6,7,8,5,0};

    for(int i=0 ; i<10 ; i++){
        int min = 1000000000;
        int jj = 0 , swap = 0;
        for(int j=i ; j<10 ; j++){
            if(min > nums[j]){
                min = nums[j];
                jj = j;
            } 
        }
        swap = nums[i];
        nums[i] = nums[jj];
        nums[jj] = swap;
    } 

    for(int i=0 ; i<10 ; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0 ;
}