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
        vector grid(n,string(""));
        for(auto&x:grid)cin>>x;
        vector dp(n,vector<int>(n));
        // dp[i][j] == number of ways to get to grid[i][j]
        if(grid[0][0] != '*')dp[0][0] = 1;
        for(int i = 0;i<n;i++){
                for(int j = 0;j<n;j++){
                        if(grid[i][j] != '*'){
                                if(i)dp[i][j] += dp[i-1][j];
                                dp[i][j] %= M;
                                if(j)dp[i][j] += dp[i][j-1];
                                dp[i][j] %= M;
                        }
                }
        }
        cout<<dp[n-1][n-1]<<'\n';
}
