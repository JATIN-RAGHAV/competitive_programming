#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>adj{};
using t = tuple<int,int,int,int>;
vector<t> dist{}; // dist[i].first -> longest dist from i to leaf, dist[i].second is the second longest dist
vector<t> res{}; // dist[i].first -> longest dist from i to leaf, dist[i].second is the second longest dist

t dfs(int i,int p){
        int mx1 = -1;
        int n1,n2;
        n1 = n2 = i;
        int mx2 = -1;
        if(adj[i].size() == 1 && adj[i][0] == p){
                dist[i] = {0,i,0,i};
                return dist[i];
        }
        for(int x:adj[i]){
                if(x != p){
                        auto [ds,_2,_,_1] = dfs(x,i);
                        if(ds>=mx1){
                                mx2 = mx1;
                                mx1 = ds;
                                n2 = n1;
                                n1 = x;
                        }
                        else if(ds>mx2){
                                mx2 = ds;
                                n2 = x;
                        }
                }
        }
        dist[i] = {mx1+1,n1,mx2+1,n2};
        return dist[i];
}

void parent(int i,int u){
        res[i]={0,i,0,i};
        if(!u){
                res[i] = dist[i];
        }
        else{
                auto [d1,n1,d2,n2] = res[u];
                auto& [cd1,cn1,cd2,cn2] = res[i];
                res[i] = res[u];
                cd1++;
                if(n1 == i){
                        cd1 = d2+1;
                        cn1 = n2;
                }
        }
        for(int x:adj[i]){
                if(x != u){
                        parent(x,i);
                }
        }
}
template<typename T>
ostream& operator<<(ostream& os,vector<T> a){
        if(!a.size()){
                os<<"[]";
        }
        else{
                os<<'['<<a[0];
                for(int i = 1;i<a.size();i++){
                        os<<','<<a[i];
                }
                os<<"]\n";
        }
        return os;
}

int main(){
        int n = 7;
        adj.assign(n,vector<int>{});
        adj[1].push_back(2);
        adj[1].push_back(3);
        adj[1].push_back(4);
        adj[2].push_back(1);
        adj[3].push_back(1);
        adj[4].push_back(1);
        adj[2].push_back(5);
        adj[2].push_back(6);
        adj[6].push_back(2);
        adj[5].push_back(2);
        dist.assign(n+1,t{});
        dfs(1,0);
        res.assign(n+1,t{});
        parent(1,0);
        vector<int> final(n+1,0);
        for(int i = 0;i<n;i++){
                auto [pd1,_,_1,_2] = dist[i];
                auto [cd1,_3,_4,_5] = res[i];
                final[i] = max(pd1,cd1);
        }
        cout<<final;
}
