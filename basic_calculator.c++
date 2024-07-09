#include<iostream>
#include<string>
#include<stack>
#include<cmath>
#include<algorithm>
using namespace std;
int caldulate(string s){
    int n=s.size();
    stack<int> st;
    int number=0;
    int result=0;
    int sign=1;
    for (int i = 0; i < n; i++)
    {
        if(isdigit(s[i])){
            number=number*10 +(s[i]-'0');
        }else if(s[i]=='+'){
            result+=(number*sign);
            number=0;
            sign=1;
        }else if(s[i]=='-'){
            result+=(number*sign);
            number=0;
            sign=-1;
        }else if(s[i]=='('){
            st.push(result);
            st.push(sign);
            result=0;
            number=0;
            sign=1;
        }else if(s[i]==')'){
            result+=(number*sign);
            number=0;
            int stack_sign = st.top();
            st.pop();
            int lastresult=st.top();
            st.pop();
            result*=stack_sign;
            result+=lastresult;
        }
    }
    result+=(number*sign);
    return result;
}
int main(void){
    string s="1+1";
    int answer=caldulate(s);
    cout<<answer;
    return 0;
}