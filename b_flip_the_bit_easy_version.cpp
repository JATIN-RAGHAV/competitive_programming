/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n,k;
    cin>>n>>k;
    vector a(n,0);
    int kk;
    for(int&x:a)cin>>x;
    cin>>kk;
    kk--;

    int first = 0;
    int second = 0;
    {
        int s =0;
        while(s<kk && a[s] == a[kk])s++;
        for(int l=s,r=s;r<kk;l=r){
            while(r<kk && a[l] == a[r])r++;
            first++;
        }
        if(first&1)first++;
    }
    {
        int s =kk;
        while(s<n && a[s] == a[kk])s++;
        for(int l=s,r=s;r<n;l=r){
            while(r<n && a[l] == a[r])r++;
            second++;
        }
        if(second&1)second++;
    }
    cout<<(max(first,second))<<'\n';
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

