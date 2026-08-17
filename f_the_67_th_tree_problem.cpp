/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int x,y;
    cin>>x>>y;
    if( (x > y) || ((!x && !((x+y)&1)) && y)){
        cout<<"NO\n";
        return;
    }
    if((x+y)&1){
        y--;
    }
    else{
        x--;
    }
    int s = 2;
    cout<<"YES\n";
    for(int i = 0 ;i<x;i++){
        cout<<"1 "<<s<<'\n';
        cout<<s<<' '<<s+1<<'\n';
        s+=2;
    }
    for(int i = 0;i<(y-x);i++){
        cout<<"1 "<<(s++)<<'\n';
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

