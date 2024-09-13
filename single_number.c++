#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int singlenumber(vector<int>& nums){
    int ans =0;
    int size = nums.size();
    for(int i =0 ;i<size;i++){
        ans = ans ^ nums[i];
    }
    return ans;
}

int main(){
    vector<int> a ={32,54,32,54,44};
    int ans = singlenumber(a);
    cout<<ans;
    return 0;
}