/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector a(n,0);
    for(int&x:a)cin>>x;
    
    sort(a.begin(),a.end());
    int i{},x{n-1},res{};
    while(i<=x){
        if(a[i] + a[x]<=k){
            res++;
            i++;
            x--;
        }else{
            res++;
            x--;
        }
    }

    cout<<res<<'\n';
}
