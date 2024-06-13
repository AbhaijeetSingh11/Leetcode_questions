#include<iostream>
#include<vector>
using namespace std;
    int majorityElement(vector<int>& nums) {
       int count=0;
       int candidate=nums[0];
       for(int i=0;i<nums.size();i++){
           if(candidate==nums[i]){
            count++;
           }     
           else{
            count--;
            if(count==0){
                candidate=nums[i];
                count=1;
            }
           }
       }
       return candidate;
    }
int main(){
    vector<int> a={1,2,3,4,5,5,5,5};
    int an=majorityElement(a);
    cout<<"the majoroity element is :"<<an;
    return 0;
}