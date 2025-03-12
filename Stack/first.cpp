// What is Stack

// Stack is datatype you can store a data in that
// work in LIFO Last in First Out
// This is non-primitive data Type ,linear datatype 


// this is alll function are inn stack 
#include<iostream>
using namespace std;
#include <stack>
int main(){
    stack<string>st;
    st.push("[]");
    st.push("[");
    cout<<st.empty();
    cout<<st.top();
      st.pop();

}



// how to find it  valid parenthesies


#include<bits/stdc++.h>
using namespace std;
bool valid(string s){
    stack<char>st;
    bool r;
    for(int i=0;i<s.size();i++){
        if(s[i]=="{"||s[i]=="("||s[i]=="]"){
            st.push(s[i]);
        }
        else if (s[i]=="}"){
            if(st.empty()&&st.top()=="{"){
                st.pop();
            }
            else {
                r= false;
                break;
            }
        }
        else if (s[i]=="]"){
            if(st.empty()&&st.top()=="["){
                st.pop();
            }
            else {
                r= false;
                break;
            }
        }
        else if (s[i]==")"){
            if(st.empty()&&st.top()=="("){
                st.pop();
            }
            else {
                r= false;
                break;
            }
        }
    }

    if(!st.empty()){

        return false;
    }
    else{
        return true;
    }
}

int main(){

    stack<string>s;

    s="[{()}]";
    if(valid(s)){
        cout<<"valid";
    }
    else{
        cout<<"not valid";
    }



    
}


