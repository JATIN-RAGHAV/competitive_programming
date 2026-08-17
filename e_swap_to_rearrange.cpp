/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin>>n;
    vector a(n,0);
    vector b(n,0);
    vector adj(n+1,set<pair<int,int>>{});
    for(int&x:a)cin>>x;
    for(int&x:b)cin>>x;
    for(int i = 0;i<n;i++){
        adj[a[i]].insert({b[i],i});
        adj[b[i]].insert({a[i],i});
    }
    bool p = true;
    for(auto s:adj){
        if(s.size() & 1){
            p = false;
            break;
        }
    }
    if(!p){
        cout << -1 << '\n';
        return;
    }

    stack<pair<int,int>> st{};

    vector<pair<int,int>> res{};
    for(int i = 1;i<n;i++){
        if(!adj[i].empty()){
            auto [x,ii] = *(adj[i].begin());
            st.push({i,ii});
            while(!st.empty()){
                auto [tpi,tpii] = st.top();

                if(adj[tpi].empty()){
                    res.emplace_back(tpi,tpii);
                    st.pop();
                }
                else{
                    auto [x,ind] = *(adj[tpi].begin());
                    st.push({x,ind});
                    adj[tpi].erase(adj[tpi].begin());
                    auto it = adj[x].find({tpi,ind});
                    adj[x].erase(it);
                }
            }
        }
    }
    vector<int> ans{};
    for(int i = 0;i+1<res.size();i++){
        auto [x,ii] = res[i];
        if(a[ii] != x){
            ans.emplace_back(ii);
        }
    }

    cout<<ans.size()<<'\n';
    if(!ans.size())cout<<'\n';
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]+1 <<" \n"[i==ans.size()-1];
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

