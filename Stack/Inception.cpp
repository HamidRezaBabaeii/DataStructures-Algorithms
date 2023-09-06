#include <iostream>
#include <stdio.h>
#include <stack>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<string> s;
    vector<string> arr;
    while(n>=0){
        string str;
        getline(cin,str);
        if(str=="Test"){
            if(!s.empty())
                arr.push_back(s.top());
                // cout << s.top() << endl ;
            if(s.empty())
               arr.push_back("Not in a dream");
                // cout << "Not in a dream" << endl;
        }
        else if(str=="Kick"){
            if(!s.empty())
                s.pop();
        }
        else{
            int i=0;
            bool y = false;
            string ss="";
            while (i<str.length()) { 
                if(str[i]==' '){
                    y = true;
                }
                if(y==true){
                    stringstream stream ;
                    stream << str[i];
                    string r;
                    stream >> r;
                    ss += r;
                }
                i++;
            }
            if(ss!=""){
                s.push(ss);
            }
        }
        
        n--;
    }

    for(int i=0 ; i< arr.size(); i++){
        cout << arr[i] << endl;
    }
    return 0;
}