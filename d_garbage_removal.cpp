/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int r,c,n;
        cin>>r>>c>>n;
        vector rows(r+1,set<int>()),cols(c+1,set<int>());
        int x,y;
        for(int i = 0;i<n;i++){
                cin>>x>>y;
                cols[y].insert(x);
                rows[x].insert(y);
        }
        int q;
        cin>>q;
        while(q--){
                cin>>x>>y;
                if(x==1){
                        cout<<rows[y].size()<<'\n';
                        for(int i:rows[y]){
                                cols[i].erase(y);
                        }
                        rows[y].clear();
                }
                else{
                        cout<<cols[y].size()<<'\n';
                        for(int i:cols[y]){
                                rows[i].erase(y);
                        }
                        cols[y].clear();
                }
        }
}
