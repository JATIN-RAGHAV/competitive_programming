/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        string s;
        cin>>s;
        if(s.size()>10){
                cout<<s[0]<<s.size()-2<<s.back()<<'\n';
        }
        else{
                cout<<s<<'\n';
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

