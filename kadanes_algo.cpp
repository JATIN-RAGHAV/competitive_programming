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
        int mx = 0;
        int cmx = 0;
        for(int i =0;i<n;i++){
                if(a[i]<cmx+a[i]){
                        cmx = a[i]+cmx;
                }
                else{
                        cmx = a[i];
                }
                mx = max(mx, cmx);
        }
        cout<<mx<<'\n';
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

