/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
const int range = 5e5+1;
void solve(){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        int G = 0;
        for(int x:a){
                G = gcd(G,x);
        }
        int cnt = count(a.begin(),a.end(),G);
        if(cnt){
                cout<<n-cnt<<'\n';
                return;
        }
        vector dp(n+1,vector<int>(range));
        fill(dp[0].begin(),dp[0].end(),n);
        dp[0][G]=0;
        for(int i = 1;i<=n;i++){
                for(int x = 0;x<range;x++){
                        int g = gcd(a[i-1],x);
                        dp[i][x] = min(dp[i-1][x], 1 + dp[i-1][g]);
                }
        }
        int op = dp[n][0]-1;
        cout<<(n-1+op)<<'\n';
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
