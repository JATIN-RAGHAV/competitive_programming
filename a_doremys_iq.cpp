/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
vector<int> a;
int q;
bool is_ok(int i){
        int cq = q;
        int n = a.size();
        for(;i<n;i++){
                if(a[i] > cq){
                        cq--;
                }
        }
        return cq>=0;
}

void solve(){
        int n;
        cin>>n>>q;
        a.assign(n,0);
        for(int&x:a)cin>>x;
        int l = -1, r= n-1;
        while(r-l>1){
                int m = l + (r-l)/2;
                if(is_ok(m)){
                        r = m;
                }
                else{
                        l = m;
                }
        }
        for(int i = 0;i<n;i++){
                if(i>=r || a[i] <= q){
                        cout<<1;
                }
                else{
                        cout<<0;
                }
        }
        cout<<'\n';
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

