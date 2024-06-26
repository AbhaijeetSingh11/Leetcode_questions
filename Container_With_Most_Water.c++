#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
int maxArea(vector<int>& height){
    int n=height.size();
    int l=0;
    int r=n-1;
    int area=0;
    while(l<r){
        area=max(area,(r-l)*min(height[l],height[r]));
        if(height[l]<height[r]){
            l++;
        }
        else{
            r--;
        }
    }
    return area;
}
int main(void){
    vector<int> height={1,8,6,2,5,4,9,3,7};
    int area=maxArea(height);
    cout<<area;
    return 0;
}