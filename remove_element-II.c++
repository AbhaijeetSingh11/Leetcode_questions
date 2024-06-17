#include<iostream>
#include<vector>
using namespace std;
int removeII(vector<int>& nums){
    int testing =nums[0];
    int count=0;
    int index=1;
    for (int i = 1; i < nums.size(); i++)
    {
        if(nums[i]!=nums[i-1]){
            count=0;
            testing=nums[i];
            nums[index]=nums[i];
            index++;
        }
        else{
            count++;
            if(count<2){
                nums[index]=nums[i];
                index++;
            }
        }
    }
    return index;
    
}
int main(){
    vector<int> nums={1};
    int n=removeII(nums);
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<",";
    }
    return 0;
}