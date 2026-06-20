#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
using namespace std;


int main() {
    //number of coins
    int n;
    cin>>n;
    // sum of money 
    int x;
    cin>>x;
    vector<long long> coin(n);
    for(int i =0; i<n;i++){
        cin>>coin[i];
    }
    vector<long long > dp(x + 1, 1e18);
    
    dp[0]=0;
    

    
    for(int i =1; i<=x;i++){
        for(int j =0;j<n;j++){
            
            if(i-coin[j]>=0){
            dp[i]=min(dp[i],dp[i-coin[j]]+1);
            }
        }
    }
    if(dp[x]==1e18){
        cout<< -1<<endl;
    }
    else{
        cout<<dp[x]<<endl;;
    }
    
    return 0;
    
}