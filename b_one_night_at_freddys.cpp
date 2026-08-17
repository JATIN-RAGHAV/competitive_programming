/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,m,l;
        cin>>n>>m>>l;
        vector a(n,0);
        for(int&x:a)cin>>x;
        int c = 0;
        multiset<int> mm;
        for(int i = 0;i<m;i++)mm.insert(0);
        for(int i = 1;i<=l;i++){
                multiset<int>::iterator mn = --mm.end();
                for(int j = 0;j<n && mn != mm.begin();j++)mn--;
                mm.insert(*mn + 1);
                mm.erase(mn);
                if(c < a.size() && a[c] == i){
                        mm.erase(--mm.end());
                        mm.insert(0);
                        c++;
                        n--;
                }
        }
        int res = ranges::max(mm);
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
