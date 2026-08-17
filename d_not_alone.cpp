/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int cost(int x,int y){
        return abs(x-y);
}

int cost(int x,int y,int z){
        if(x<y)swap(x,y);
        if(x<z)swap(x,z);
        if(y<z)swap(y,z);
        return x-z;
}

long long dp_solve(vector<int>&a){
        int n = a.size();
        vector<long long>dp(n);
        dp[0] = INT_MAX;
        dp[1] = cost(a[0],a[1]);
        dp[2] = cost(a[0],a[1],a[2]);
        for(int i = 3;i<n;i++){
                dp[i] = min(dp[i-2] + cost(a[i],a[i-1]),dp[i-3] + cost(a[i],a[i-1],a[i-2]));
        }
        return dp.back();
}
void rot(vector<int>&a){
        int n = a.size();
        for(int i = 0;i<n-1;i++){
                swap(a[i],a[i+1]);
        }
}
void solve(){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        long long ans = dp_solve(a);
        rot(a);
        ans = min(ans,dp_solve(a));
        rot(a);
        ans = min(ans,dp_solve(a));
        cout<<ans<<'\n';
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

