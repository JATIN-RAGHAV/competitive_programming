/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    
    vector a(n,0);
    map<int,vector<int>> xrem;
    for(int&x:a)cin>>x;

    for(int i = 0;i<n;i++){
        xrem[a[i]%x].push_back(i);

    }

    int res{};
    for(auto [rem,lst]:xrem){
        int opp = x-rem;
        if(!rem){
            opp = 0;
        }
        auto olst = xrem[opp];

        for(int i:lst){
            for(int j:olst){
                if(i < j && ((a[i] % y) == (a[j] % y))){
                    res++;
                }
            }
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

