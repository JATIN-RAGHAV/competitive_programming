/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int MAX = 1e6+1;
vector<int> spf;
void sieve(){
    for(int i = 2;i<MAX;i++){
        if(spf[i] == 1){
            for(int j = 1;j*i < MAX;j++){
                if(spf[i*j] == 1)
                    spf[i*j] = i;
            }
        }
    }
}

void solve(){
    int n;
    cin>>n;
    vector a(n,0);
    for(int&x:a)cin>>x;

    map<int,int>mp{};
    for(int x:a){
        while(spf[x] != x){
            mp[spf[x]]++;
            x/=spf[x];
        }
        if(x != 1)
            mp[x]++;
    }

    for(auto [x,cnt]:mp){
        if(cnt % n){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    spf.assign(MAX,1);
    sieve();
    while(tt--){
        solve();
    }
}
