#include <iostream>
#include <stdio.h>

using namespace std ;

int sum = 0;
int count(int n ,int* arr){
    if (n<0)return sum ;
    if(arr[n]%2==0)sum++;
    return count(n-1 , arr);

}


int main(){

    int n ;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
     cout << count(n-1,arr) << endl;

    return 0 ;
}

