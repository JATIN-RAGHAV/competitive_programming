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
    int res = 0;
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            res = max(res,a[i] ^ a[j]);
        }
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

