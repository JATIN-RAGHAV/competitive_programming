/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(long long&x:a)cin>>x;
        map<long long,vector<long long>>mp;// key(int)->value(vector) -> at this key you can have your length extended by 
        set<long long>poss;
        poss.insert(0);
        for(int i = 0;i<n;i++){
                if((n-i) <= a[i]){
                        mp[a[i] - (n-i)].push_back(i);
                }
        }
        for(auto [x,v]:mp){
                if(poss.count(x)){
                        for(long long y:v){
                                poss.insert(y+x);
                        }
                }
        }
        auto it = --poss.end();
        cout<<a.size()+*it+0ll<<'\n';
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
