#include <stdio.h>
#include <iostream>
using namespace std;

int **pow(int k,int n , int arr1[2][2]){
    int **arr2 = new int*[2];
    arr2[0] =new int[2];
    arr2[1] =new int[2];
    arr2[0][0] = 0;
    arr2[0][1] = 1;
    arr2[1][0] = 1;
    arr2[1][1] = 1;
    int arr3[2][2] = {{0,0},{0,0}};
    if(k==0){
        arr2[0][0] = 0;
        arr2[0][1] = 1;
        arr2[1][0] = 0;
        arr2[1][1] = 1;
        return arr2;
    }if(k==1){
        arr2[0][0] = 0;
        arr2[0][1] = 0;
        arr2[1][0] = 1;
        arr2[1][1] = 1;
        return arr2;
    }else{
        if(n!=0){
            if(k%2==0){
                arr3[0][0] = (arr2[0][0] * arr1[0][0]) + (arr2[0][1] * arr1[1][0]);
                arr3[0][1] = (arr2[0][0] * arr1[0][1]) + (arr2[0][1] * arr1[1][1]);
                arr3[1][0] = (arr2[1][0] * arr1[0][0]) + (arr2[1][1] * arr1[1][0]);
                arr3[1][1] = (arr2[1][0] * arr1[0][1]) + (arr2[1][1] * arr1[1][1]);
                return pow(k,n-1 ,arr3);
            }else{
                arr3[0][0] = (arr2[0][0] * arr1[0][0]) + (arr2[0][1] * arr1[1][0]);
                arr3[0][1] = (arr2[0][0] * arr1[0][1]) + (arr2[0][1] * arr1[1][1]);
                arr3[1][0] = (arr2[1][0] * arr1[0][0]) + (arr2[1][1] * arr1[1][0]);
                arr3[1][1] = (arr2[1][0] * arr1[0][1]) + (arr2[1][1] * arr1[1][1]);
                return pow(k,n-1 ,arr3);
            }
        }
        arr2[0][0] = (arr1[0][0] * arr1[0][0]) + (arr1[0][1] * arr1[1][0]);
        arr2[0][1] = (arr1[0][0] * arr1[0][1]) + (arr1[0][1] * arr1[1][1]);
        arr2[1][0] = (arr1[1][0] * arr1[0][0]) + (arr1[1][1] * arr1[1][0]);
        arr2[1][1] = (arr1[1][0] * arr1[0][1]) + (arr1[1][1] * arr1[1][1]);
        if(k%2!=0){
                arr3[0][0] = arr2[0][0];
                arr3[0][1] = arr2[0][1];
                arr3[1][0] = arr2[1][0];
                arr3[1][1] = arr2[1][1];    
                arr2[0][0] =(arr3[0][0] * 0) + (arr3[0][1] * 1);
                arr2[0][1] =(arr3[0][0] * 1) + (arr3[0][1] * 1);
                arr2[1][0] =(arr3[1][0] * 0) + (arr3[1][1] * 1);
                arr2[1][1] =(arr3[1][0] * 1) + (arr3[1][1] * 1);
                
        }
        return arr2;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[2][2] = {{0,1},{1,1}};
    int **arr2 = pow(n, n/2 - 1,arr) ;
    cout << arr2[1][0] << " ";
    return 0 ;
}
