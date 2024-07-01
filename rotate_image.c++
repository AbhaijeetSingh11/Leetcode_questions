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
void rotote_image1(vector<vector<int>>& matrix) {
  int n=matrix.size();
  int m=matrix[0].size();
  vector<vector<int>> new_matrix(m,vector<int>(n));
  for (int i = 0; i < n; i++)
  {
    for (int J = 0; J < m; J++)
    {
      new_matrix[J][n-1-i]=matrix[i][J];
    }
    
  }
  matrix=new_matrix;
}
int main(void){
    vector<vector<int>> matrix={{2,29,20,26,16,28},
                                {12,27,9,25,13,21},
                                {32,33,32,2,28,14},
                                {13,14,32,27,22,26},
                                {33,1,20,7,21,7},
                                {4,24,1,6,32,34}};
    rotote_image1(matrix);
    for(int i=0;i<matrix.size();i++){
        for (int j = 0; j < matrix.size(); j++)
        {
            cout<<matrix[i][j]<<",";
        }
        cout<<endl;
        
    }
    return 0;
}