/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    long long t,h,u;
    cin>>t>>h>>u;
    int mn = min(u,t); 
    long long res = 4ll*mn; //pairing t with u
    u-=mn;
    t-=mn;
    mn = min(h,t/2);
    res += 7ll*mn; //pairing t with h
    h-=mn;
    t-=2*mn;
    mn = min(h,t);
    res += 5ll*mn;
    h-=mn;
    t-=mn;
    if(t){
        res+=1+(2ll*t);
    }
    res+=3ll*(u+h);
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

