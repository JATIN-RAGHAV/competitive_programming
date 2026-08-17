/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,k;
        cin>>n>>k;
        vector<bool>a(k+1,false);
        int c;
        for(int i = 0;i<n;i++){
                cin>>c;
                if(c<k){
                        a[c] = true;
                }
        }
        int res = 0;
        while(a[res])res++;
        cout<<min(res,k-1)<<'\n';
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

