/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int res = count(s.begin(),s.end(),'1');
        for(int l=0,r=0;r<n;l=r){
                while(r<n && s[r] == s[l])r++;
                if(s[l] == '0'){
                        int sz = r-l;
                        if(l!=0)sz--;
                        if(r!=n)sz--;
                        res += (sz+2)/3;
                }
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

