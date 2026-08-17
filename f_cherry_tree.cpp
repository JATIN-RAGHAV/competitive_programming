/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
vector<bool> visited;

pair<bool,bool> dfs(int i,vector<vector<int>>& adj){
    pair ans(false,false);
    if(adj[i].size() == 1 && i != 1){
        return ans;
    }
    int zCnt = 0,tCnt=0; // zCnt for number of childnodes giving mod3 = 0, tCnt for mod3=2
    for(int x:adj[i]){
        if(!visited[x]){
            visited[x] = true;
            const auto [f,t] = dfs(x,adj);
            if(f){
                zCnt++;
            }
            if(t){
                tCnt++;
            }
        }
    }
    int rem = (adj[i].size() - (i == 1 ? 0 : 1))%3;
    auto& [f,s] = ans;
    if(rem == 0){
        f = true;
        if(zCnt >= 1 || tCnt >= 2){
            s = true;
        }
    }
    else if(rem == 1){
        if(zCnt >= 1 || tCnt >= 2){
            f = true;
        }
        if(zCnt >= 2 || tCnt >= 1){
            s = true;
        }
    }
    else{
        s = true;
        if(tCnt >= 1 || zCnt >= 2){
            f = true;
        }
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    visited.assign(n+1,false);
    vector adj(n+1,vector(0,0));
    int l,r;
    for(int i =0;i<n-1;i++){
        cin>>l>>r;
        adj[l].push_back(r);
        adj[r].push_back(l);
    }
    visited[1] = true;
    auto [f,s] = dfs(1,adj);
    cout << (f ? "YES" : "NO")<<'\n';
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

