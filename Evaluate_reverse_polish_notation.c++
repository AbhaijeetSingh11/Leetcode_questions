#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int evalnotation(vector<string> & token){
    stack<int> st;
    for(int i=0;i<token.size();i++){
        if(token[i]=="+"){
            int v1=st.top();
            st.pop();
            int v2=st.top();
            st.pop();
            int result=(v1+v2);
            st.push(result);
        }
        else if(token[i]=="-"){
            int v1=st.top();
            st.pop();
            int v2=st.top();
            st.pop();
            int result=(v2-v1);
            st.push(result);
        }
        else if(token[i]=="*"){
            int v1=st.top();
            st.pop();
            int v2=st.top();
            st.pop();
            int result=(v2*v1);
            st.push(result);
        }
        else if(token[i] == "/"){
            int v1=st.top();
            st.pop();
            int v2=st.top();
            st.pop();
            int result=(v2/v1);
            st.push(result);
        }
        else{
            st.push(atoi(token[i].c_str()));
        }
    }
    return st.top();
}
int main(void){
    vector<string> token={"4","13","5","/","+"};
    int ans=evalnotation(token);
    cout<<ans;
    return 0;
}