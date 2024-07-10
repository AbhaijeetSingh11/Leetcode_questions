#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isvalid(string s){
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(s[i]==')'){
                if(!st.empty()){
                    if(st.top()!='('){
                        return false;
                    }
                    else{
                        st.pop();
                    }
                }
                else{
                    return false;
                }
            }
            else  if(s[i]==']'){
                if(!st.empty()){
                    if(st.top()!='['){
                        return false;
                    }
                    else{
                        st.pop();
                    }
                }
                else{
                    return false;
                }
            }
            else  if(s[i]=='}'){
                if(!st.empty()){
                    if(st.top()!='{'){
                        return false;
                    }
                    else{
                        st.pop();
                    }
                }
                else{
                    return false;
                }
            }
        }
    }
    if(!st.empty())
    return false;
    else return true;
    
}   
int main(void){
    string s={"(("};
    bool ans=isvalid(s);
    cout<< ans;
    return 0;
}