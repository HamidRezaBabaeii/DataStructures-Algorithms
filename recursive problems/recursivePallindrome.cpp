#include <iostream>
#include <stdio.h>

using namespace std;

string palindrome(string str , int n , int m , bool pall){
    if(m > n){
        if(pall == true)return "True";
        if(pall == false)return "False";
    }
    if(str[n]==str[m]){
        return palindrome(str , n-1 , m+1 , pall);
    }else{
        pall = false;
        return "False";
    }
}


int main(){
    string str ;
    cin >> str;
    int n = str.length();
    bool pall = true ;
    cout << palindrome(str,n-1,0,pall) << endl;
    return 0 ;
}