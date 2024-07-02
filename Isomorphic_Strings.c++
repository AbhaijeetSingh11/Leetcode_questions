#include<string>
#include<iostream>
#include<map>
using namespace std;
bool isomorphic(string s,string t){
    map<char,char> m1,m2;
    if(s.size()!=t.size()){
         return false;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if(m1.find(s[i])!=m1.end()){
            if(m1[s[i]]!=t[i]){
                return false;
            }
        }
        else if(m2.find(t[i])!=m2.end()){
            if (m2[t[i]]!=s[i])
            {
                return false;
            }
        }
        else{
            m1[s[i]]=t[i];
            m2[t[i]]=s[i];
        }
    }
    cout<<m1[t[0]];
    return true;
}
int main(void){
    string s="bbbaaba";
    string t="aaabbab";
    bool answer=isomorphic(s,t);
    cout<<answer;
    return 0;
}