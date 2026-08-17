/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(n);
        a[0] = 1;
        for(int i =1;i<n;i++)cin>>a[i];
        for(int&x:b)cin>>x;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int bi = 0;
        int res =0;
        for(int ai=0;ai<n;ai++){
                while(bi<n && b[bi]<=a[ai])bi++;
                if(bi<n){
                        res++;
                        bi++;
                }
        }
        cout<<(n-res)<<'\n';
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

