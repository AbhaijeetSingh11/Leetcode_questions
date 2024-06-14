#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool jumping(vector<int> nums){
    int reach=0;
    for(int i=0;i<nums.size();i++){
        if(reach<i){
            return false;
        }
        reach=max(reach,i+nums[i]);
    }
    return true;
    }
int main(){
    vector<int> nums={2,0};
    bool ans=jumping(nums);
    cout<<ans;
    return 0;
}