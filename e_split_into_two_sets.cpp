/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

vector<vector<int>> adj;
vector<bool> visited;

int dfs(int i ){
        for(int x:adj[i]){
                if(!visited[x]){
                        visited[x] = true;
                        return 1 + dfs(x);
                }
        }
        return 1;
}

void solve(){
        int n;
        cin>>n;
        adj.assign(n+1,vector<int>{});
        visited.assign(n+1,false);
        int x,y;
        bool p = true;
        for(int i = 0;i<n ;i++){
                cin>>x>>y;
                adj[x].push_back(y);
                adj[y].push_back(x);
                if(x==y || adj[x].size()>2 || adj[y].size()>2)p=false;
        }
        if(!p){
                cout<<"NO\n";
                return;
        }
        for(int i =1;i<=n;i++){
                if(!visited[i]){
                        visited[i] = true;
                        if(dfs(i)&1){
                                p = false;
                        }
                }
        }
        cout<<(p?"YES":"NO")<<'\n';
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

