/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        auto b = a;
        sort(b.begin(),b.end());
        long long res = 1e18;
        for(int i =0;i<n;i++){
                if(a[i] != b[i]){
                        res = min(res, 1ll*max(a[i] - b[0], b.back()-a[i]));
                }
        }
        cout<<(res==1e18 ? -1 : res)<<'\n';
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

