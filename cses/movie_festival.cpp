/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i].second>>a[i].first;
    }

    sort(a.begin(),a.end());
    int res{},c{};
    for(int i =0;i<n;i++){
        auto [ed,st] = a[i];
        if(st >= c){
            res ++;
            c = ed;
        }
    }
    cout<<res<<'\n';
}
