/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector a(n+1,0);
        for(int i = 1;i<=n;i++){
                cin>>a[i];
        }
        vector ans(n+1,0); // ans[i] -> longest neat subsequenct in range a[0-i);
        vector mp(n+1,vector<int>{}); // mp[i] -> list of indecies where i has been seen
        for(int i =1;i<=n;i++){
                // not include a[i]
                ans[i] = ans[i-1];

                // include a[i]
                mp[a[i]].push_back(i);
                int sz = mp[a[i]].size();
                if(sz >= a[i]){
                        int ind = mp[a[i]][sz - a[i]];
                        if(ans[ind-1] + a[i] > ans[i]){
                                ans[i] = ans[ind-1] + a[i];
                        }
                }
        }
        cout<<ans.back()<<'\n';
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
