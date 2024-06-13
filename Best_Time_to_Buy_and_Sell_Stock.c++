#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int maxprofit(vector<int>& prices){
    int minsofar=prices[0];
    int maxprofit=0;
    int profit=0;
    for (int i = 0; i < prices.size(); i++)
    {
        minsofar=min(minsofar,prices[i]);
        profit=prices[i]-minsofar;
        maxprofit=max(maxprofit,profit);
    }
    return maxprofit;
}
int main(){
    vector<int> a={2,4,1};
    int profit=maxprofit(a);
    cout<<"profit :"<<profit;
    return 0;
}