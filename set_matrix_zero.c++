#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(void){
    vector<vector<int>> matrix={{1,0,3}};
    bool firstrow=false;
    bool firstcol=false;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if(matrix[i][j]==0){
                if(i==0){
                    firstrow=true;
                }
                if(j==0){
                    firstcol=true;
                }
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        } 
    }
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }
    if(firstrow){
        for (int i = 0; i < matrix[0].size(); i++)
        {
            matrix[0][i]=0;
        }
    }
    if(firstcol){
        cout<<"ji";        
        for (int j = 0; j < matrix.size(); j++)
        {
            matrix[j][0]=0;
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        cout<<"[";
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"]"<<endl;
        
    }
    
    return 0;
}