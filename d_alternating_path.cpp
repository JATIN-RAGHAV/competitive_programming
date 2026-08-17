/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
namespace rn = std::ranges;

void solve(){
    int n,m;
    cin>>n>>m;
    vector adj(n+1,vector<int>{});
    vector visited(n+1,0);
    int l,r;
    for(int i = 0;i<m;i++){
        cin>>l>>r;
        adj[l].push_back(r);
        adj[r].push_back(l);
    }

    int out = 2;
    int in = 1;
    queue<int> q;
    stack<int> st;
    for(int i = 1;i<=n;i++){
        if(!visited[i]){
            bool cool = true;
            q.push(i);
            visited[i] = in;
            while(!q.empty()){
                int i = q.front();q.pop();
                st.push(i);
                for(int x:adj[i]){
                    if(!visited[x]){
                        if(!cool){
                            visited[x] = 4;
                        }
                        else{
                            visited[x] = 3 - visited[i];
                        }
                        q.push(x);
                    }
                    else{
                        if(visited[x] == visited[i]){
                            cool = false;
                        }
                    }
                }
            }
            if(!cool){
                while(!st.empty()){
                    int i = st.top();st.pop();
                    visited[i] = 4;
                }
            }
            else{
                while(!st.empty())st.pop();
            }
        }
    }
    int res = rn::count(visited,in);
    cout<<res<<'\n';
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

