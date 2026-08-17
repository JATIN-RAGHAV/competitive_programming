/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
int mx = 0;

void dfs(int i,vector<vector<int>>& adj,vector<bool>& visited, vector<int>&layers,vector<int>&dist){
        for(int x:adj[i]){
                if(!visited[x]){
                        dist[x] = dist[i]+1;
                        visited[x] = true;
                        layers[dist[x]]++;
                        mx = max(mx, dist[x]);
                        dfs(x,adj,visited,layers,dist);
                }
        }
}

void solve(){
        int n;
        cin>>n;
        vector adj(n+1,vector<int>());
        int x,y;
        for(int i = 1;i<n;i++){
                cin>>x>>y;
                adj[x].push_back(y);
                adj[y].push_back(x);
        }
        vector<bool>visited(n+1,false);
        vector<int> layers(n+1,0),dist(n+1,0);
        mx = 0;
        dfs(1,adj,visited,layers,dist);
        int res = 0;
        bool p = true;
        // removing chock points
        for(int d = 0;d<=mx;d++){
                if(p && layers[d]>0){
                        layers[d]--;
                }
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

