#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    int n, ni = 0 , m, mi = 0; 
    cin >> n >> m;
    int array1[n] , array2[m] ,max = 0 , min = 0;

    for(int i=0 ; i<n ; i++){
        cin >> array1[i];
    }

    for(int i=0 ; i<m ; i++){
        cin >> array2[i];
    }

    if(n>m)min = m;
    if(m>n)min = n;
    int array3[m+n] = {0};
    vector<int> array4;
    bool finish = false;

    while(finish == false){
        
        if(ni!=n && mi!=m && array1[ni] == array2[mi]){
            array4.push_back(array1[ni]);
            array4.push_back(array1[mi]);
            ni++;
            mi++;
            continue;
        }

        if(ni!=n && mi!=m && array1[ni] > array2[mi]){
            array4.push_back(array2[mi]);
            mi++;
            continue;
        }
       
        if(ni!=n && mi!=m && array1[ni] < array2[mi]){
            array4.push_back(array1[ni]);
            ni++;
            continue;
        }

        if(ni==n && min != m){
            array4.push_back(array2[mi]);
            mi++;
            if(mi==m)break;
        }else if(mi == m && min != n){
            array4.push_back(array1[ni]);
            ni++;
              if(ni==n)break;
        }
     
    }

    cout << endl << "vector : ";
    for(const int& i : array4){
        cout << i << " ";
    } 
    cout << endl ;

    return 0 ;
}