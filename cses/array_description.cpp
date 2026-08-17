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

        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        for(int&x:a)cin>>x;
        vector dp(n,vector<long long>(m));
        // dp[i][x] = number of valid arrays from a[0] till a[i] where a[i] = x;
        if(a[0]){
                dp[0][a[0]-1] = 1;
        }
        else{
                fill(dp[0].begin(),dp[0].end(),1);
        }
        for(int i = 1;i<n;i++){
                if(a[i]){
                        int x = a[i]-1;
                        dp[i][x] += dp[i-1][x];
                        if(x)dp[i][x] += dp[i-1][x-1];
                        if((x+1)<m)dp[i][x] += dp[i-1][x+1];
                        dp[i][x] %= M;
                }
                else{
                        for(int x = 0;x<m;x++){
                                dp[i][x] += dp[i-1][x];
                                if(x)dp[i][x] += dp[i-1][x-1];
                                if((x+1)<m)dp[i][x] += dp[i-1][x+1];
                                dp[i][x] %= M;
                        }
                }
        }
        long long ans = accumulate(dp[n-1].begin(),dp[n-1].end(),0ll);
        ans%=M;
        cout<<ans<<'\n';
}
