/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,k;
        cin>>n>>k;
        map<int,int>mp;
        vector<int>a(n);
        for(int&x:a){
                cin>>x;
                mp[x]++;
        }
        bool p = true;
        int ans = 0;
        for(auto&[x,cnt]:mp){
                if(cnt%k){
                        p = false;
                        break;
                }
                cnt/=k;
        }
        if(p){
                int l = 0,r=0;
                map<int,int>mp2;
                mp2[a[0]]++;
                while(l<n){
                        while((r+1<n) && (mp2[a[r+1]]+1<=mp[a[r+1]])){
                                r++;
                                mp2[a[r]]++;
                        }
                        ans += r-l+1;
                        mp2[a[l]]--;
                        l++;
                }
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
