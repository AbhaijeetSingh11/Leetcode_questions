#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool issafe(int row, int col,vector<vector<char>> nums,char val){
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[row][i]==val){
            count++;
        }
        if(nums[i][col]==val){
            count++;
        }
        if(nums[(3*(row/3))+(i/3)][(3*(col/3))+(i%3)]==val){
            count++;
        }
    }
    if(count==3){
        return true;
    }
    else{
        return false;
    }
}
bool isValidSudoko(vector<vector <char>> & nums){
    char value=0;
    for(int row=0;row<9;row++){
        for(int col=0;col<9;col++){

            if(nums[row][col]=='.'){
                continue;
            }
            else{
                value=nums[row][col];
                bool ki=issafe(row,col,nums,value);
                // cout<<ki;
                if(!ki){
                    return false;
                }
            }
        }
    }
    return true;
}
int main(void){
    vector<vector<char>> nums={{'3','3','.','.','7','.','.','.','.'}
                             ,{'6','.','.','1','9','5','.','.','.'}
                             ,{'.','9','8','.','.','.','.','6','.'}
                             ,{'8','.','.','.','6','.','.','.','3'}
                             ,{'4','.','.','8','.','3','.','.','1'}
                             ,{'7','.','.','.','2','.','.','.','6'}
                             ,{'.','6','.','.','.','.','2','8','.'}
                             ,{'.','.','.','4','1','9','.','.','5'}
                             ,{'.','.','.','.','8','.','.','7','9'}};
    bool ans=isValidSudoko(nums);
    cout<<endl<<"bool answer is :"<<ans;
    return 0;
}