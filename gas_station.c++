#include<iostream>
#include<vector>
using namespace std;
int canCompleteCircuit(vector<int>& gas, vector<int>& cost){
    int totaldiff=0;
    int fuel=0;
    int start=0;
    for (int i = 0; i < gas.size(); i++)
    {
        int diff=gas[i]-cost[i];
        totaldiff+=diff;
        fuel+=diff;
        if(fuel<0){
            fuel=0;
            start=i+1;
            if(start==gas.size()){
                start=0;
            }
        }
    }
    return (totaldiff<0)? -1:start;
}
int main(){
    vector<int> gas={1,2,3,4,5};
    vector<int> cost={3,4,5,1,2};
    int ans=canCompleteCircuit(gas,cost);
    cout<<ans;
    return 0;
}