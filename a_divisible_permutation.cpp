/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        int res[2]{1,n};
        vector<int>ans(n);
        bool b = true;
        for(int i = n-1;i>=0;i--){
                ans[i] = res[b];
                if(b)res[b]--;
                else res[b]++;
                b = !b;
        }
        for(int i =0;i<n;i++){
                cout<<ans[i] <<" \n"[i==n-1];
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

