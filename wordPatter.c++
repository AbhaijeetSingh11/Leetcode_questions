#include<iostream>
#include<map>
#include<string>
using namespace std;
bool word_pattern(string pattern,string s){
    map<char,string> m1;
    map<string,char> m2;
    int count=0;
    int words=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==' '){
            continue;
        }
        string temp;
        while(i<s.size() && s[i]!=' '){
            temp+=s[i];
            ++i;
        }
        if(m1.find(pattern[count])!=m1.end()){
            if(m1[pattern[count]]!=temp){
                return false;
            }
        }
        else if(m2.find(temp)!=m2.end()){
            if(m2[temp]!=pattern[count]){
                return false;
            }
        }
        else{
            m1[pattern[count]]=temp;
            m2[temp]=pattern[count];
        }
        count++;
        words++;
    }
    if(pattern.size()==words){
        return true;
    }
   return false;
}
int main(void){
    string pattern="abba";
    string s="car bike bike car";
    bool ans=word_pattern(pattern,s);
    cout<<ans;
    return 0;
}