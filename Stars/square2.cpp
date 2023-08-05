#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1 ; i<=n ; i++){
        if(i==1 || i==n){
            for(int i=1 ; i<=n ; i++){
                cout << "*";
            }
        }else{
            for(int i=1 ; i<=n ; i++){
                if(i==1 || i==n){
                    cout << "*";
                }else{
                    cout << " ";
                }
            }
        }
        cout << endl;

    }

}