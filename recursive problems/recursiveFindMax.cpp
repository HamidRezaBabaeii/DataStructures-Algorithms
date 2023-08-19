#include <iostream>
#include <stdio.h>

using namespace std;

int Max(int n , int* arr){
    if(n<0) return arr[0];
    if(arr[n]>Max(n-1 , arr))arr[n-1]=arr[n];
    return Max(n-1,arr);
}

int main(){
    int n ;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << Max(n-1 , arr) << endl ;
    return 0 ;
}