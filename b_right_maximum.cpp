/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin>>n;
    vector a(n,0);
    for(int&x:a)cin>>x;
    multiset ml(a.begin(),a.end());
    int res = 0;
    for(int i =n-1;i>=0;i--){
        auto mx = (--ml.end());
        while(i>=0 && a[i] != *mx){
            ml.erase(ml.find(a[i]));
            i--;
        }
        res++;
        ml.erase(mx);
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

