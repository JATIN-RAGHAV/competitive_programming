/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <algorithm>
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,m;
        cin>>n>>m;
        vector adj(n+1,vector<int>{});
        vector<int> gen(n+1,-1);
        // gen[i] is the max no of next generations covered
        // gen[i] = 3, 
        // gen[i] = -1, gen[i] = 0
        int p;
        for(int i = 2;i<=n;i++){
                cin>>p;
                adj[p].push_back(i);
        }
        int x,y;
        for(int i = 0;i<m;i++){
                cin>>x>>y;
                gen[x] = max(gen[x],y);
        }
        vector<bool>covered(n+1,false);
        // covered[i] = true, i^th person has been covered
        queue<pair<int,int>>q;
        q.push({1,gen[1]});
        // q.front(), x,y. x-> person, y-> gen[x]
        while(!q.empty()){
                auto [i,g] = q.front();q.pop();
                if(g>=0){
                        covered[i] = true;
                }
                for(int x:adj[i]){
                        q.push({x,max(gen[x],g-1)});
                }
        }
        int res = count(covered.begin(),covered.end(),true);
        cout<<res<<'\n';
}
