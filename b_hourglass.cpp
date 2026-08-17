/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int s,k,m;
        cin>>s>>k>>m;
        int res = 0;
        int div = m/k;
        if(div&1){
                res = max(0 , min(k,s)-(m%k));
        }
        else{
                res = max(0 , s - (m%k));
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

