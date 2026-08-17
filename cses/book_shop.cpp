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
        vector<int>pages(n),prices(n);
        for(int&x:prices)cin>>x;
        for(int&x:pages)cin>>x;
        vector<long long> dp(x+1);
        // dp[x] = max no of pages achievable with x as the price limit
        for(int i = 0;i<n;i++){
                for(int s = x;s>=prices[i];s--){
                        dp[s] = max(dp[s] , dp[s-prices[i]] + pages[i]);
                }
        }
        cout<<dp[x]<<'\n';
}
