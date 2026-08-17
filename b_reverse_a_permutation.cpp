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
        vector<int> res = a;
        int bg = n;
        for(int i = 0;i<n;i++){
                if(a[i] != bg)break;
                bg--;
        }
        if(bg){
                auto it = find(a.begin(),a.end(),bg);
                int l = n-bg;
                int r = it - a.begin();
                for(int i = 0;i<=(r-l);i++){
                        res[l+i] = a[r-i];
                }
        }
        for(int i = 0;i<n;i++){
                cout<<res[i]<<" \n"[i==n-1];
        }
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

