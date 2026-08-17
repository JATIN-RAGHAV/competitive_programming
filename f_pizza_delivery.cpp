/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,X,Y,eX,eY;
        cin>>n>>X>>Y>>eX>>eY;
        vector p(n,pair<int,int>{});
        for(auto& [x,y]:p){
                cin>>x>>y;
        }
        p.push_back({eX,eY});
        sort(p.begin(),p.end());
        long long res = eX-X;
        int cy = Y;
        for(int l=0,r=0;r<p.size();l=r){
                while(r < p.size() &&  p[r].first == p[l].first)r++;
                int y1 = p[l].second;
                int y2 = p[r-1].second;
                res += abs(y2-y1);
                if(abs(y2-cy) < abs(y1-cy)){
                        res += abs(y2-cy);
                        cy = y1;
                }
                else{
                        res += abs(y1-cy);
                        cy = y2;
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

