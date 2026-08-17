/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
const int MAX = 1e5+5;
const int M = 1e9+7;
long long fact[MAX]={0};
void pre(){
    fact[0] = fact[1] = 1;
    for(int i = 2;i<MAX;i++){
        fact[i] = fact[i-1]*i;
        if(fact[i] > M){
            fact[i] %= M;
        }
    }
}

long long scr(int m,vector<int>&a,int k){
    if(m<0){
        return 0;
    }
    long long res = 1;
    for(int i =m;i<k;i++){
        res*=a[i];
    }
    res /= fact[k-m];
    return res;
}


void solve(){
    int n;
    cin>>n;
    vector a(n,0);
    for(int&x:a)cin>>x;
    int lst = 0;
    long long c = a[0];

    for(int k=1;k<=n;k++){
        while(1+lst < k){
            long long ns = c * (k-lst) / a[lst];
            if(ns >= c){
                lst ++;
                c = ns;
            }
        }
        cout<<(k-lst)<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    pre();
    while(tt--){
        solve();
    }
}

