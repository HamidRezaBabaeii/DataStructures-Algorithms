#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int k=n;
    for(int i=1 ; i<=n ; i++){
        if(i==1 || i==n){
            for(int i=1 ; i<=n ; i++){
                cout << "*";
            }
        }else{
            for(int j=1 ; j<=n ; j++){
                if(j==1 || j==n){
                    cout << "*";
                }else if(i==j || k==j){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        k--;
        cout << endl;

    }

}