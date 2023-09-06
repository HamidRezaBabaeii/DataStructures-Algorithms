#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;

int main(){

    while (true)
    {
       int num;
       cin >> num;

        while(true){
            int arr[num]={0} , arr2[num]={0} , k = num - 1;
            stack<int> mystack;
            // exit condition
            if(num==0 && arr[0]==0 && arr[1]==0){
                return 0;
            }
            // get numbers
            for(int i =0 ; i<num ; i++){
                cin >> arr[i];
                if(arr[0]==0){
                    break;
                }
            }
            // exit condition
            if( arr[0]==0 && arr[1]==0){
                break;
            }
            
            bool wasgreat = false;
            for(int i=num-1 ; i>=-1 ; i--){
                // ----------------
                if(arr[i-1]-arr[i]==1 && i!=0 && i!=-1){
                    if(mystack.size() != 0 && mystack.top()==arr[i]){
                        mystack.pop();
                    }
                    mystack.push(arr[i]);
                    mystack.push(arr[i-1]);
                    
                }
                // ----------------
                // moshkel injast
                if(arr[i-1]-arr[i]>1 && i!=0 && i!=-1 ){
                    if(mystack.size() != 0 && mystack.top()==arr[i]){
                        mystack.pop();
                    }
                    mystack.push(arr[i]);
                    mystack.push(arr[i-1]);
                    arr2[k] = mystack.top();
                    wasgreat = true ;
                    mystack.pop();
                    k--;
                    i--;
                }
                if(i==0){
                    wasgreat = false;
                }
                // ----------------
                if(arr[i-1]-arr[i]<1 || i==-1){

                    if(wasgreat != true)
                        while(mystack.empty()==false){
                            arr2[k] = mystack.top();
                            mystack.pop();
                            k--;
                            if(mystack.empty()==true){
                                i--;
                            }
                            
                        }

                    if(mystack.size()==0 && i>=-1 && k>=-1){
                        if(i>=0)
                            mystack.push(arr[i]);
                        if(i<0)
                            mystack.push(arr[i+1]);

                        arr2[k] = mystack.top();
                        mystack.pop();
                        k--;
                        wasgreat = false;
                    }else{
                        mystack.push(arr[i-1]);
                        arr2[k] = mystack.top();
                        mystack.pop();
                        k--;
                    }
                    
                }
            }
            bool yes= true;
            for(int i=0 ; i<num ; i++){
                if(arr2[i]!= i+1){
                    yes = false ;
                    break;
                }
            }
            if(yes==true){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
           
        }
        cout << endl;
    }
    

    return 0 ;
}