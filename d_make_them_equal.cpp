/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int get_cost(int bi){
        int x = 0;
        int curr = 1<<x;
        int diff = bi - curr;
        while(diff > 0){
                for(int i = 1;i<=curr;i++){
                        if(!(curr%i) && (curr/i)<=diff){
                                x++;
                                diff -= curr/i;
                                curr += curr/i;
                                break;
                        }
                }
        }
        return x;
}

void solve(){
        int n,k;
        cin>>n>>k;
        vector<int>b(n),c(n);
        for(int&x:b)cin>>x;
        for(int&x:c)cin>>x;
        vector<int>cost(n);
        for(int i = 0;i<n;i++){
                cost[i] = get_cost(b[i]);
        }
        // dp[i][w] = best profit when using first i items with sack capacity w
        vector dp(n+1,vector<int>(k+1,0));
        // dp[i][w] = max(dp[i-1][w], dp[i-1][w-cost_i] + profit[i]);
        for(int i = 1;i<=n;i++){
                for(int w = 0;w<=k;w++){
                        if(w>=cost[i-1]){
                                dp[i][w] = max(dp[i-1][w], dp[i-1][w-cost[i-1]] + c[i-1]);
                        }else{
                                dp[i][w] = dp[i-1][w];
                        }
                }
        }
        cout<<dp.back().back()<<'\n';
}

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int tt;
        cin >> tt;
        while(tt--){
                solve();
        }
}

