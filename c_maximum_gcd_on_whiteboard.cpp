/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,k;
        // pref[i] == count of numbers in range [0-i];
        cin>>n>>k;
        vector<int>pref(n+1);
        map<int,int>mp;
        int c;
        for(int i =0;i<n;i++){
                cin>>c;
                mp[c]++;
        }
        for(int i = 1;i<=n;i++){
                pref[i] = pref[i-1] + mp[i];
        }
        int res = 1;
        for(int i = n ;i;i--){
                int sm = pref[i-1];
                int bg = 0;
                if((4*i-1) <= n){
                        bg = pref[(4*i)-1] - pref[i];
                }
                else{
                        bg = n - pref[i];
                }
                bg -= mp[2*i] + mp[3*i];
                if(k>= (bg+sm)){
                        res = i;
                        break;
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
