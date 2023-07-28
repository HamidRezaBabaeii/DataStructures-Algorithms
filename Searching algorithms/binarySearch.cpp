#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int number = 0 ;
    cin >> number ;
    int nums[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    bool find = false;
    int lastIndex = 19 , firtsIndex = 0 , index = 0;
    while(find == false){
        if(nums[lastIndex]< number || nums[firtsIndex] > number) break;
        int middle = (lastIndex+firtsIndex)/2;
        if(number == nums[middle]){
            index = middle;
            find = true;
            break;
        }else if(number > nums[middle]){
            firtsIndex = middle + 1 ;
        }else if(number < nums[middle]){
            lastIndex = middle - 1 ;
        }
    }

    if(find == true)
         cout << nums[index] << ":(index)" << index << endl ;
    cout << "find status : " << find << endl ;

    return 0 ;
}