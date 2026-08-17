/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin>>n;

    vector a(n,0);
    for(int&x:a)cin>>x;
    
    set<long long> s{0};
    long long c = 0;
    for(int i =0;i<n;i++){
        c = c + (i&1 ? +a[i] : -a[i]);
        if(s.contains(c)){
            cout<<"YES\n";
            return;
        }
        s.insert(c);
    }

    cout<<"NO\n";
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

