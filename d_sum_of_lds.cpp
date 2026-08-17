/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        vector<long long>dp(n);
        dp[0] = 1;
        for(int i = 1;i<n;i++){
                if(a[i] < a[i-1]){
                        dp[i] = dp[i-1] + i + 1;
                }
                else{
                        dp[i] =dp[i-1] + 1;
                }
        }
        long long res = accumulate(dp.begin(),dp.end(),0ll);
        cout<<res<<'\n';
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

