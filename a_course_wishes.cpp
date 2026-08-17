/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n,k;
    cin>>n>>k;
    vector a(k,0),b(n,0);
    for(int&x:a)cin>>x;
    for(int&x:b)cin>>x;
    vector res(0,0);
    while(true){
        int x=0;
        for(;x<n;x++){
            if(b[x] !=k+1){
                break;
            }
        }
        for(int i =0;i<n && x<n;i++){
            if(b[i] > b[x] && b[i]!=k+1)x=i;
        }
        if(x>=n)break;
        for(int i=0;i<(k+1-b[x]);i++){
            res.push_back(x+1);
        }
        b[x] = k+1;
    }
    cout<<res.size()<<'\n';
    if(!res.size())cout<<'\n';
    for(int i = 0;i<res.size();i++){
        cout<<res[i]<<" \n"[i==res.size()-1];
    }
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
