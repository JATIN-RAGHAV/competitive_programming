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
    int res = 0;
    for(int i = 0;i<n;i++){
        rotate(s.begin(),s.begin()+1,s.end());
        int ans = 1;
        for(int i = 1;i<n;i++){
            if(s[i] != s[i-1]) ans ++;
        }
        res = max(ans,res);
    }
    cout<<res<<'\n';
    multiset<int> f{s.begin(),s.end()};
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

