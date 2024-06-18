#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reversekrdo(string &s){
    reverse(s.begin(),s.end());
    return s;
}
string reverseorder(string s){
    int index=0;
    int initial=0;
    int final=0;
    string tt="";
    string sub="";
    // for(int i=0;i<(s.size()/2);i++){
    //     swap(s[i],s[s.size()-1-i]);
    // }
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {           
        if(s[i] == ' '&&s[i+1] == ' '){
            continue;
        }
        else{
            s[index]=s[i];
            index++;
        }
    }
    for (int i = 0; i < (s.size()-index); i++)
    {
        s.pop_back();
    }
    for(int t=0;t<s.size();t++){
        if(s[t]==' ' || t==s.size()-1){
            final=t;
            // for(int j=initial;j<((final-initial)/2);j++){
            //     swap(s[j],s[final-j-1]);
            // }
            tt=s.substr(initial,final);
            cout<<tt;
            sub+=reversekrdo(tt);
            initial=t+1;
        }
    }

    return s;
}
int main(){
    string s="i got cgpa this time eight";
    string abhai=reverseorder(s);
    cout<<abhai;
    return 0;
}