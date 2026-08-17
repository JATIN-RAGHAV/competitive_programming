#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
        void dfs(int i,vector<vector<int>>& adj,vector<bool>& visited,vector<int>& dist){
                for(int x:adj[i]){
                        if(!visited[x]){
                                visited[x] = true;
                                dist[x] =dist[i]+1;
                                dfs(x,adj,visited,dist);
                        }
                }
        }
    int specialNodes(int n, vector<vector<int>>& edges, int x, int y, int z) {
                int res = 0;
                vector<int>dx(n),dy(n),dz(n);
                vector<bool> visited(n,false);
                vector adj(n,vector<int>{});
                for(auto e:edges){
                        adj[e[0]].push_back(e[1]);
                        adj[e[1]].push_back(e[0]);
                }
                visited[x] = true;
                dx[x] = 0;
                dfs(x,adj,visited,dx);
                fill(visited.begin(),visited.end(),false);
                visited[y] = true;
                dy[y] = 0;
                dfs(y,adj,visited,dy);
                fill(visited.begin(),visited.end(),false);
                visited[z] = true;
                dz[z] = 0;
                dfs(z,adj,visited,dz);
                for(int i = 0;i<n;i++){
                        long long a = dx[i]*1ll*dx[i];
                        long long b = dy[i]*1ll*dy[i];
                        long long c = dz[i]*1ll*dz[i];
                        if(c<b)swap(c,b);
                        if(c<a)swap(c,a);
                        if(a+b == c){
                                res++;
                        }
                }
                return res;
    }
};
