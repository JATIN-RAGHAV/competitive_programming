/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int mod = 676767677;

void solve(){
    int n,m;
    cin>>n>>m;
    vector b(n,0);
    for(int&x:b)cin>>x;
    vector mp(n,vector<int>{});
    for(int i = 0;i<n;i++){
        mp[b[i]].push_back(i);
    }
    long long res = 1;
    long long cl = 0;
    long long c = ranges::count(b,0); // current number of people sitting down
    bool p = true;
    for(int t = 1;t<m;t++){
        if(p){
            for(int i:mp[t]){
                if(i && (b[i-1]+1<b[i])){
                    res *= (c - cl);
                }
                else if(i<n-1 && (b[i+1]+1 <b[i])){
                    res *= (c-cl);
                }
                else{
                    res *= c;
                }
                res %= mod;
                bool nb = false;
                if(i){
                    nb = b[i-1]<b[i];
                }
                if(i<n-1){
                    nb |= b[i+1] < b[i];
                }
                if(!nb){
                    p = false;
                    break;
                }
            }
            cl = c;
            c += mp[t].size();
        }
        else{
            break;
        }
    }
    if(!p){
        res = 0;
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

