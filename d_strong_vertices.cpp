/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int&x:a)cin>>x;
    for(int&x:b)cin>>x;

    vector diff(n,pair<int,int>{});
    for(int i = 0;i<n;i++){
        auto& [x,y] = diff[i];
        x = a[i] - b[i];
        y = i + 1;
    }

    sort(diff.rbegin(),diff.rend());
    vector<int>res{};
    for(int i =0;i<n && diff[i].first == diff[0].first;i++){
        res.push_back(diff[i].second);
    }
    cout<<res.size()<<"\n";
    n = res.size();
    for(int i =n-1;i>=0;i--){
        cout<<res[i] <<" \n"[i==0];
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

