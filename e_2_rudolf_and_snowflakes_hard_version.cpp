/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

const long long MAX = 1e18+7;
set<long long>poss;

void pre(){
    for(int k = 2;k<100;k++){
        long long sm = 1ll + k + (k*k);
        long long c = k*1ll*k;
        while(sm <= MAX && sm > 0){
            poss.insert(sm);
            c*=k;
            cout<<sm<<endl;
            sm+=c;
        }
    }
}


void solve(){
    int n;
    cin>>n;

    cout<<(poss.contains(n) ? "YES\n" : "NO\n");
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    pre();
    cin >> tt;
    while(tt--){
        solve();
    }
}

