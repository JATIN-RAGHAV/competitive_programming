/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    vector<int>a(7);
    for(int&x:a)cin>>x;
    ranges::sort(a);
    int res = 0;
    for(int i = 0;i<6;i++){
        res -= a[i];
    }
    res += a[6];
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

