/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        long long n,k;
        cin>>n>>k;
        long long d=2,s=1;
        while(k > ((n-s+1+d-1)/d)){
                k-=(n-s+1+d-1)/d;
                s<<=1;
                d<<=1;
        }
        int res = s + (k-1)*d;
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

