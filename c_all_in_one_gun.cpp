/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n,h,k;
    cin>>n>>h>>k;
    vector a(n,0);
    for(int&x:a)cin>>x;
    long long sm = accumulate(a.begin(),a.end(),0ll);
    long long res = (h/sm)*1ll*(k+n);
    h %= sm;
    if(h){
        multiset<int> ms{a.begin(),a.end()};
        int c = 0;
        int mn = INT_MAX;
        for(int i =0;i<n;i++){
            c += a[i];
            res++;
            mn = min(mn,a[i]);
            if(c >= h){
                break;
            }
            ms.erase(ms.find(a[i]));
            int mxInc = *(--ms.end()) - mn;
            if(c + mxInc >= h){
                break;
            }
        }
    }
    else{
        res-=k;
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
