#include<iostream>
#include<stack>
#include<string>
using namespace std;
string specifiypath(string path){
    stack<string> conicalpath;
    string result;
    for (int i = 0; i<path.size(); ++i)
    {
        if(path[i]=='/'){
            continue;
        }
        string temp;
        while(i<path.size() && path[i]!='/'){
            temp+=path[i];
            ++i;
        }
        if(temp=="."){
            continue;
        }
        else if(temp==".."){
            if(!conicalpath.empty()){
                conicalpath.pop();
            }
        }
        else{
            conicalpath.push(temp);
        }
    }
    while(!conicalpath.empty()){
        result="/"+conicalpath.top()+result;
        conicalpath.pop();
    }
    if(result.size()==0){
        return"/";
    }
    return result;
}
int main(void){
    string s="/home/user/Documents/../Pictures";
    string ans=specifiypath(s);
    cout<<ans;
    return 0;
}