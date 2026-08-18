/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,x;
    cin>>n>>x;
 
    map<int,vector<int>> mp{};
    int c{};
    for(int i =0;i<n;i++){
        cin>>c;
        mp[c].push_back(i+1);
    }
 
    bool p{false};
    for(auto [c,v]:mp){
        if(mp.contains(x-c)){
            if((x-c == c) && (v.size() == 1))break;
            cout<<v[0]<<' '<<mp[x-c].back()<<'\n';
            p=true;
            break;
        }
    }
    if(!p){
        cout<<"IMPOSSIBLE\n";
    }
}
