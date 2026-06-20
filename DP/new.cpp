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
int main(){
       long long n,k;
        cin>>n>>k;
        // long long mod=1e9+7;
        vector<long long> c(n);
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        vector<long long> dp(k+1,1e18);
        dp[0]=0;
        for(int i=1;i<=k;i++){
            for(int j=0;j<n;j++){
                if((i-c[j])>=0){
                    dp[i]=min(dp[i],dp[i-c[j]]+1);
                }
            }
        }
        if(dp[k]==1e18){
            cout<<-1<<endl;
        }
        else{
            cout<<dp[k]<<endl;
        }
    return 0;
}