/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        string s;
        cin>>s;
        int n = s.size();
        int mn = INT_MAX;
        int ans = 0;
        bool ex_b = false;
        for(int l=0,r=0;r<s.size();l=r){
                while(r<n && s[r] == s[l]){
                        r++;
                }
                if(s[l] == 'A'){
                        ans += r-l;
                        mn = min(mn,r-l);
                }
                else{
                        if(r-l>1){
                                ex_b = true;
                        }
                }
        }
        if((s[0] == 'A' && s.back() == 'A') && !ex_b){
                ans-=mn;
        }
        cout<<ans<<'\n';
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

