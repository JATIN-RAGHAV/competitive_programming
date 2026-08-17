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
    int c;
    long long sm{};
    for(int i = 0;i<n;i++){
        cin>>c;
        sm+=c;
    }
    if((sm&1) || (((k*n)+1)&1)){
        cout<<"YES\n";
        return;
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

