/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a==b) && (b == c) && (c == d)){
                cout<<"YES\n";
        }
        else{
                cout<<"NO\n";
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

