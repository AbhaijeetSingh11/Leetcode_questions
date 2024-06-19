#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &nums,int k){
    while(k>nums.size()){
        k=k-nums.size();
    }
    vector<int> a(k,0);
    for (int i = 1; i <= k; i++)
    {
        a[k-i] = nums[nums.size()-i];
    }
    for (int i = nums.size()-k-1; i >=0; i--)
    {
        nums[i+k]=nums[i];
    }
    for (int i = 0; i < k; i++)
    {
        nums[i]=a[i];
    }
   
}
int main(){
    vector<int> nums={1,2};
    rotate(nums,5);
    for (int i = 0; i < 2; i++)
    {
        cout<<nums[i]<<endl;
    }
    
    return 0;
}