/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
const int M = 1e9+7;
int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;
        cin>>n;
        vector<long long> dp(n+1);
        // dp[s] = number of ways to get to a sum of s with [1-6]
        dp[0] = 1;
        for(int s = 1;s<=n;s++){
                for(int x = 1;x<=6 && x<=s ; x++){
                        dp[s] += dp[s-x];
                        dp[s]%=M;
                }
        }
        cout<<dp[n]<<'\n';
}
