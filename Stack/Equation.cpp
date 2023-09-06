#include <iostream>
#include <stdio.h>
#include <vector>
#include <stack>
#include <sstream>

using namespace std;

int main(){

    int testcases ;
    cin >> testcases;

    while(testcases>0){
        stack<char> stck;
        string str ="";
        for(int i=0 ; i<testcases ; i++){
            //char chr ;
            string chr;
            cin >> chr;
            if(chr=="\n"){
                break;
            }
            stringstream ss;
            if(chr!="(" && chr!=")" && chr!="+" && chr!="-" && chr!="*" && chr!="/"){
                ss << chr;
                string s ;
                ss >> s  ;
                str += s;
                continue;
            }else{
                if(stck.empty()){
                    ss << chr;
                    char s ;
                    ss >> s  ;
                    stck.push(s);
                    continue;
                }else{
                    // plus -----------------------
                    if(chr=="+" && stck.top()=='+'){
                        str += "+";
                        continue;
                    }
                    if(chr=="+" && stck.top()=='('){
                        stck.push('+');
                        continue;
                    }
                    if(chr=="+" && stck.top()=='-'){
                        stck.push('+');
                        continue;
                    }
                    if(chr=="+" && stck.top()=='*'){
                        str += "*";
                        stck.pop();
                        stck.push('+');
                        continue;
                    }
                    if(chr=="+" && stck.top()=='/'){
                        str += "/";
                        stck.pop();
                        stck.push('+');
                        continue;
                    }
                    // minus ----------------------
                    if(chr=="-" && stck.top()=='-'){
                        str += "-";
                        continue;
                    }
                    if(chr=="-" && stck.top()=='('){
                        stck.push('-');
                        continue;
                    }
                    if(chr=="-" && stck.top()=='+'){
                        stck.pop();
                        str += "+";
                        stck.push('-');
                        continue;
                    }
                    if(chr=="-" && stck.top()=='*'){
                        str += "*";
                        stck.pop();
                        stck.push('-');
                        continue;
                    }
                    if(chr=="-" && stck.top()=='/'){
                        str += "/";
                        stck.pop();
                        stck.push('-');
                        continue;
                    }
                    // multiple -------------------
                    if(chr=="*" && stck.top()=='-'){
                        stck.push('*');
                        continue;
                    }
                    if(chr=="*" && stck.top()=='('){
                        stck.push('*');
                        continue;
                    }
                    if(chr=="*" && stck.top()=='+'){
                        stck.push('*');
                        continue;
                    }
                    if(chr=="*" && stck.top()=='*'){
                        str += "*";
                        continue;
                    }
                    if(chr=="*" && stck.top()=='/'){
                        stck.push('*');
                        continue;
                    }
                    // div ------------------------
                    if(chr=="/" && stck.top()=='-'){
                        stck.push('/');
                        continue;
                    }
                    if(chr=="/" && stck.top()=='('){
                        stck.push('/');
                        continue;
                    }
                    if(chr=="/" && stck.top()=='+'){
                        stck.push('/');
                        continue;
                    }
                    if(chr=="/" && stck.top()=='*'){
                        str += "*";
                        stck.pop();
                        stck.push('/');
                        continue;
                    }
                    if(chr=="/" && stck.top()=='/'){
                        str += "/";
                        continue;
                    }
                    // par -------------------------
                    if(chr=="(" ){
                        stck.push('(');
                        continue;
                    }if(chr==")" ){
                        while(stck.top()!= '('){
                            stringstream sss;
                            sss << stck.top();
                            string s ;
                            sss >> s  ;
                            str += s;
                            stck.pop();
                        }
                        if(stck.top()=='(')
                            stck.pop();
                    }           
                }    
            }
        }
        while(!stck.empty()){
            stringstream sss;
            sss << stck.top();
            string s ;
            sss >> s  ;
            str += s;
            stck.pop();
        }
        cout << str << endl ;

        testcases--;
    }

    return 0 ;
}