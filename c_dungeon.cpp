/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,m;
        cin>>n>>m;
        multiset<int>a;
        vector monsters(m,pair<int,int>());
        int c;
        for(int i = 0;i<n;i++){
                cin>>c;
                a.insert(c);
        }
        for(int i =0;i<m;i++){
                cin>>monsters[i].second;
        }
        for(int i = 0;i<m;i++){
                cin>>monsters[i].first;
        }

        sort(monsters.begin(),monsters.end(),[](auto p1, auto p2){
                if((bool)p1.first != (bool)p2.first){
                        return (bool)p1.first;
                }
                return p1.second < p2.second;
        });

        int res = 0;
        for(auto [c,b]: monsters){
                auto it = a.lower_bound(b);
                if(it!=a.end()){
                        res++;
                        if(!c){
                                a.erase(it);
                        }
                        else if(c>*it){
                                a.erase(it);
                                a.insert(c);
                        }
                }
        }
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
