/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int&x:a)cin>>x;
        for(int&x:b)cin>>x;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int ans = 0;
        for(int i = 0;i<n;i++){
                int charm = INT_MAX;
                for(int j = 0;j<n;j++){
                        charm = min(charm,abs(a[j] - b[(j+i)%n]));
                }
                ans = max(ans,charm);
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

