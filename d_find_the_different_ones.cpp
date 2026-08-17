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
    for(int&x:a)cin>>x;
    set<int> st{};
    for(int l=0,r=0;r<n;l=r){
        while(r<n && a[l] == a[r]){
            r++;
        }
        st.insert(l);
    }

    int q;
    cin>>q;
    int l,r;
    while(q--){
        cin>>l>>r;
        l--;r--;

        auto nxt = (st.upper_bound(l));
        int ind = n;
        if(nxt != st.end()){
            ind = *nxt;
        }
        if(ind <= r ){
            cout<<++l<<' '<<(ind+1)<<'\n';
        }else{
            cout<<"-1 -1\n";
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

