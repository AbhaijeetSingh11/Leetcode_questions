#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool check(string rasomNote,string magzine){
    int count=0;
    int n=magzine.size()-1;
    int m=rasomNote.size();
    for (int i = 0; i < rasomNote.size(); i++)
    {
        for (int j = 0; j <=n; j++)
        {
            if(rasomNote[i]==magzine[j]){
                magzine.erase(j,1);
                count++;
                if(count==m){
                    return true;
                }
                --n;
                break;
            }
        }
        
    }
    return false;
    
}
int main(void){
    string rasomNote="fihjjjjei";
    string magzine="hjibagacbhadfaefdjaeaebgi";
    bool answer=check(rasomNote,magzine);
    cout<<answer;
    return 0;
}