/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<int,vector<int>> mp{};
    int c;
    for(int i =0;i<n;i++){
        cin>>c;
        if(mp.contains(c)){
            mp[c].push_back(i);
        }else{
            mp[c].push_back(-1);
        }
    }
    int mx{n};
    for(auto& [x,v]:mp){
        v.push_back(n);
        int bs{},c{};
        for(int i = 1;i<v.size()-1;i++){
            c = v[i+1] - v[i-1]-1;
            bs = max(bs,c);
        }
        mx = min(mx,bs);
    }
    cout<<mx<<'\n';
}
