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
        int res = 0;
        for(int l=0,r=0;l<n;l=r){
                r++;
                while(r<n && ((a[l] == a[r]) || (a[l]+a[r] == 7))){
                        r++;
                }
                res += (r-l)/2;
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

