/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,m,k;
        cin>>n>>m>>k;
        vector<int>prod(n+1);
        for(int i = 1;i<=n;i++){
                cin>>prod[i];
        }
        vector adj(n+1,vector<int>());
        vector<int> res(k+1);
        int l,r;
        for(int i = 0;i<m;i++){
                cin>>l>>r;
                adj[l].push_back(r);
                adj[r].push_back(l);
        }
        vector<int> djk(n+1,INT_MAX-(n+1));
        djk[1]=0;
        map<int,set<int>>mp;
        mp[0].insert(1);
        vector<bool>visited(n+1,false);
        int remain = n;
        while(remain){
                int next = -1;
                while(!mp.empty()){
                        auto pr = mp.begin();
                        auto& st = (*pr).second;
                        while(!st.empty()){
                                auto it = st.begin();
                                if(!visited[*it]){
                                        next = *it;
                                        djk[next] = (*pr).first;
                                        visited[next]=true;
                                        remain--;
                                        int p = prod[next];
                                        res[p] = max(res[p], djk[next]);
                                        break;
                                }
                                st.erase(it);
                        }
                        if(next!=-1)break;
                        mp.erase(pr);
                }
                for(int x:adj[next]){
                        if(djk[x]>djk[next]+1){
                                mp[djk[next]+1].insert(x);
                        }
                }
        }
        for(int i = 1;i<=k;i++){
                cout<<res[i]<<" \n"[i==k];
        }
}
