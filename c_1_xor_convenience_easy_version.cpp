/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<int>res(n);
        res[n-1] = 1;
        for(int i = n-2;i>0;i--){
                res[i] = 1^(i+1);
        }
        res[0] = (n&1)?n-1:n;
        for(int i = 0;i<n;i++){
                cout<<res[i] <<" \n"[i==n-1];
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

