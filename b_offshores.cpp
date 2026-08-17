/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
#include <numeric>
using namespace std; 

void solve(){
    long long n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n);
    for(int&x:a)cin>>x;
    vector<int>mx(n);
    for(int i = 0;i<n;i++){
        mx[i] = y*(a[i]/x);
    }
    long long sum = accumulate(mx.begin(),mx.end(),0ll);
    long long res = 0;
    for(int i = 0;i<n;i++){
        res = max(res,sum-mx[i]+a[i]);
    }
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

