#include<iostream>
#include<string>
#include<cmath>
#include<vector>
/*
(0,0)(0,1)(0,2)
(1,0)(1,1)(1,2)
(2,0)(2,1)(2,2)
*/
using namespace std;
void rotote_image(vector<vector<int>>& matrix){
    int topleft;
    int l=0;
    int r=matrix.size()-1;
    while(l<=r){
        int top=l;
        int bottom=r;
        for(int i=l;i<=r-1;i++){
            topleft=matrix[top][l+i];
            matrix[top][l+i]=matrix[bottom-i][l];
            matrix[bottom-i][l]=matrix[bottom][r-i];
            matrix[bottom][r-i]=matrix[top+i][r];
            matrix[top+i][r]=topleft;
        }
        l++;
        r--;
    }
    
}
int main(void){
    vector<vector<int>> matrix={{5, 1, 9, 11},
                                 {2, 4, 8, 10}, 
                                 {13, 3, 6, 7}, 
                                 {15, 14, 12, 16}};
    rotote_image(matrix);
    for(int i=0;i<matrix.size();i++){
        for (int j = 0; j < matrix.size(); j++)
        {
            cout<<matrix[i][j]<<",";
        }
        cout<<endl;
        
    }
    return 0;
}