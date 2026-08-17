/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        long long n,m,k;
        cin>>n>>m>>k;
        multiset<int>b;
        int c;
        for(int i =0;i<m;i++){
                cin>>c;
                b.insert(c);
        }
        vector a(n,pair<int,int>{});
        int x,y,z;
        for(int i =0;i<n;i++){
                cin>>x>>y>>z;
                auto& [ex,bx] = a[i];
                k-=y;
                ex = z-y;
                bx = x;
        }
        sort(a.begin(),a.end());
        int res = 0;
        for(int i = n-1;i>=0;i--){
                auto& [ex,bx] = a[i];
                auto it = b.lower_bound(bx);
                if(it != b.end()){
                        bx = -1;
                        res++;
                        b.erase(it);
                }
        }
        for(auto [ex,bx]:a){
                if(bx != -1 && k>=ex){
                        k-=ex;
                        res++;
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
