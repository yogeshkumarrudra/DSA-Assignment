
#include <bits/stdc++.h>
using namespace std;

// #define int long long int
int main(){

    int n,mod = 1e9+7;
    cin>>n;

    //do[i]= number of ways to make i

    vector<int> dp(n+1,0); //to store solution

    //dp[i]==dp[i-6]+dp[i-5]...+dp[i-1] for{int i>=6}

    dp[0]=1;
    for(int i = 0; i<=n;i++){
        for(int j =1; j<=6;j++){
            if (i-j>=0)dp[i] +=dp[i-j],dp[i]%=mod;
            
        }
    }
    cout<<dp[n]<<" ";
    return 0;

}