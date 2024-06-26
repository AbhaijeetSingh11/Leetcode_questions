#include<iostream>
#include<string>
using namespace std;
bool issequence(string s,string t){
    int sindex=0;
    for (int i = 0; i < t.size(); i++)
    {
        if(s[sindex]==t[i]){
            sindex++;
        }
    }
    if(sindex==s.size()){
        return true;
    }
    else{
        return false;
    }
}
int main(void){
    string s="aec";
    string t="abcde";
    bool ans=issequence(s,t);
    cout<<ans;
    return 0;
}