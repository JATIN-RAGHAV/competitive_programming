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
    vector a(n,0);
    for(int&x:a)cin>>x;

    sort(a.begin(),a.end());
    int md = a[(n-1)/2];
    long long res{};
    for(int i = 0;i<n;i++){
        res+=abs(md - a[i]);
    }
    cout<<res<<'\n';
}
