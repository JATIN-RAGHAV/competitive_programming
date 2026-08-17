/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,x;
        cin>>n>>x;
        vector<int> coins(n);
        for(int&x:coins)cin>>x;
        vector<int> dp(x+1,x+1);
        dp[0] = 0;
        // dp[s] = minimum  number of coins required to get to a sum of s;
        for(int s = 1;s<=x;s++){
                for(int x:coins){
                        if(x<=s){
                                dp[s] = min(dp[s],dp[s-x]+1);
                        }
                }
        }
        cout<<(dp[x]==x+1?-1:dp[x])<<'\n';
}
