#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int trap(vector<int>& height){
    int count=0;
    int maximum=0;
    vector<int>left (height.size(),0);
    vector<int>right (height.size(),0);
    for (int i = 0; i < height.size(); i++){
        maximum=max(maximum,height[i]);
        left[i]=maximum;
    }
    maximum=0;
    for (int i = height.size()-1; i >= 0; i--){
        maximum=max(maximum,height[i]);
        right[i]=maximum;
    }
    for (int i = 0; i < height.size(); i++)
    {
        count=count+(min(left[i],right[i])-height[i]);
    }
    
    return count;
}
int main(){
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    int ans=trap(height);
    cout<<"answer is "<<ans;
    return 0;
}