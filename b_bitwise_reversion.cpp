/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int x,y,z;
        cin>>x>>y>>z;
        int a = x|y;
        int b = y|z;
        int c = x|z;
        bool p = ((a&c) == x) && ((a&b) == y) && ((c&b) == z);
        cout<<(p?"YES":"NO")<<'\n';
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

