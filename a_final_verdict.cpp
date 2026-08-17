/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        float res = accumulate(a.begin(),a.end(),0);
        res /= float(n);
        cout<<((res == q)?"YES":"NO")<<'\n';
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

