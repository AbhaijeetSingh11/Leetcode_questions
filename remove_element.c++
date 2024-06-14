#include<iostream>
#include<vector>
using namespace std;
int removea(vector<int>&nums,int val){
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=val){
            nums[count]=nums[i];
            count++;
        }
    }
    return count;
}
int main(){
    vector<int> a={3,2,2,3,5,3,6,4,4,7,8,7,6,6};
    int k=removea(a,3);
    for(int i=0;i<k;i++){
        cout<<a[i]<<',';
    }
    return 0;
}