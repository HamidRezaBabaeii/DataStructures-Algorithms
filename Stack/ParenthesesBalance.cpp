#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

int main(){

    int test ;
    cin >> test;

    while(test > 0){
        stack<char> s;
        bool thereWas = true;
        int num ;
        cin >> num;
            while(num>0){
                char chr;
                cin >> chr;
                if(chr=='(' || chr=='['){
                    s.push(chr);
                }
                if(chr==')'){
                    while(true){
                        if(s.size()==0){
                            s.push(chr);
                            break;
                        }
                        if(s.top()=='('){
                            s.pop();
                            break;
                        }else if(s.size()!=0){
                            s.pop();
                        }
                    }

                }
                if(chr==']'){
                    while(true){
                        if(s.size()==0){
                            s.push(chr);
                            break;
                        }
                        if(s.top()=='['){
                            s.pop();
                            break;
                        }else if(s.size()!=0){
                            s.pop();
                        }
                    }
                }
                num--;
            }
        if(s.empty()){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl ;
        }
        test--;
    }



    return 0 ;
}