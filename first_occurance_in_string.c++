#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int strstr(string h,string n){
    if(h.length()<n.length()){
        return -1;
    }
    string substring="";
    for(int i=0;i<h.length()-n.length()+1;i++){
        if(h[i]==n[0]){
            
            substring=h.substr(i,n.length());

            if(substring==n){
                cout<<substring;
                return i;
            }
            else{
                substring.clear();
            }
        }
    }
    return -1;
}
int main(void){
    string h="sadbutsa";
    string n="butqqqqqqqqqqqqqqqqq";
    int ans=strstr(h,n);
    cout<<ans;
    return 0;
}