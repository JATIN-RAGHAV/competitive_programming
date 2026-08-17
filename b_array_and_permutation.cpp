/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin>>n;
    vector<int>p(n),a(n);
    for(int&x:p)cin>>x;
    for(int&x:a)cin>>x;
    vector<int>index(n+1);
    for(int i = 0;i<n;i++){
        index[p[i]] = i;
    }
    int cc = -1;
    bool ok = true;
    for(int l =0,r=0;l<n;l=r){
        while(r<n && a[r] == a[l]){
            r++;
        }
        int ccc = index[a[l]];
        if(ccc<=cc){
            ok = false;
            break;
        }
        cc=ccc;
    }
    cout<<(ok?"YES":"NO")<<'\n';
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

