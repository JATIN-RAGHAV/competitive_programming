/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    long long n,m,a,b;
    cin>>n>>m>>a>>b;
    bool res = gcd(n,a) == 1 && gcd(m,b) == 1;

    res = res && (gcd(n,m) <= 2);

    cout<<(res ? "YES" : "NO")<<'\n';
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

