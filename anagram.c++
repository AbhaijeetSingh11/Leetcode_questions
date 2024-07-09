#include<iostream>
#include<cmath>
#include<map>
#include<string>
using namespace std;
bool isanagram(string s,string ti){
    map<char,int> m1;
    int n=s.size();
    int m=ti.size();
    if(m!=n){
        return false;
    }
    for (int i = 0; i < n; i++)
    {
       if(m1.find(s[i])!=m1.end()){
            if(m1[s[i]]!=0){
                m1[s[i]]=m1[s[i]]+1;
            }
        }
        else{
            m1[s[i]]=1;
        }
    }
    for (int i = 0; i < m; i++)
    {
       if(m1.find(ti[i])!=m1.end()){
            if(m1[ti[i]]!=0){
                m1[ti[i]]=m1[ti[i]]-1;
            }
        }
        else{
            m1[ti[i]]=1;
        }
    }
    
    for (auto i = m1.begin(); i != m1.end(); i++)
    {
        if(i->second!=0){
            return false;
        }
    }
    return true;
    
}
int main(void){
    string s="anagram";
    string t="nagaram";
    bool ans=isanagram(s,t);
    cout<<"the answer is:"<<ans;
    return 0;
}