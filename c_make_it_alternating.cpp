/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int M = 998244353;

int fact(int x){
    long long res  =1;
    for(int i = 1;i<=x;i++){
        res *= i;
        if(res > M){
            res %= M;
        }
    }
    return res;
}

void solve(){
    string s;
    cin>>s;
    
    int n = s.size();
    
    long long res = 1;
    int cnt = 0;
    for(int l=0,r=0;r<n;l=r){
        while(r<n && s[l] == s[r])r++;

        res *= r-l;
        res %= M;
        cnt++;
    }

    res = (res * fact(n - cnt))%M;

    cout<<(n - cnt)<<' '<<res <<'\n';
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
