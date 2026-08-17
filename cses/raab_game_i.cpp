/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n,x,y;
    cin>>n>>x>>y;

    if(x+y > n){
        cout<<"NO\n";
        return;
    }

    int nn = x+y;
    if((!x && y) || (!y && x)){
        cout<<"NO\n";
        return;
    }

    vector<int> pa{},pb{};
    for(int i =0;i<(n-nn);i++){
        pa.push_back(i+1);
        pb.push_back(i+1);
    }

    int c = n-nn+1;
    for(int i=0;i<x;i++){
        pa.push_back(n-x+1+i);
        pb.push_back(c++);
    }
    c = n-nn+1;
    for(int i = 0;i<y;i++){
        pb.push_back(n-y+1+i);
        pa.push_back(c++);
    }

    cout<<"YES\n";
    int s = pa.size();
    for(int i = 0;i<s;i++){
        cout<<pa[i]<<" \n"[i==s-1];
    }
    for(int i = 0;i<s;i++){
        cout<<pb[i]<<" \n"[i==s-1];
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
