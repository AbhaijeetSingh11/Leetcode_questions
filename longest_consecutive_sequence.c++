#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
using namespace std;
int longestconsecutive(vector<int> nums){
    int maximun =0;
    map<int,int> m1;
    if(nums.size()==1){
        return 1;
    }
    for(int i=0;i<nums.size();i++){
        m1[nums[i]]=nums[i];
    }
    int count=0;
    for(auto i=m1.begin();i!=m1.end();i++){
        nums[count]=i->second;
        count++;
    }
    count=1;
    for(int i=1;i<nums.size();i++){
        int diff=nums[i]-nums[i-1];
        if(diff==1){
            count++;
            maximun=max(maximun,count);
        }
        else{
            maximun=max(maximun,count);
            count=1;
        }
    }
    return maximun;
}
int main(void){
    vector<int> nums={100,4,200,1,3,2};
    int ans=longestconsecutive(nums);
    // cout<<ans;
    return 0;
}