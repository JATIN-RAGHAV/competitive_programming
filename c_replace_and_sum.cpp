/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,q;
        cin>>n>>q;
        vector<int>a(n),b(n);
        for(int&x:a)cin>>x;
        for(int&x:b)cin>>x;
        for(int i = 0;i<n;i++){
                if(b[i] > a[i]){
                        a[i] = b[i];
                }
        }
        int cmx = a.back();
        for(int i = n-1;i>=0;i--){
                cmx = max(cmx,a[i]);
                a[i] = cmx;
        }
        // pref[i] => sum of range [a[0],a[i])
        vector<int> pref(n+1);
        for(int i =0;i<n;i++){
                pref[i+1] = a[i] + pref[i];
        }
        int l,r;
        for(int i = 0;i<q;i++){
                cin>>l>>r;
                cout<<(pref[r] - pref[l-1])<<" \n"[i==q-1];
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

