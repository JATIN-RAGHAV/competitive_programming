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
        bool even = false,odd = false;
        for(int i = 0;i<n;i++){
                cin>>a[i];
                if(a[i]&1){
                        odd = true;
                }
                else{
                        even = true;
                }
        }
        if(odd && even){
                sort(a.begin(),a.end());
        }
        for(int i =0;i<n;i++){
                cout<<a[i]<<" \n"[i==n-1];
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

