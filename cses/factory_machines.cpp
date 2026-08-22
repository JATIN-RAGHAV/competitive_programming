/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

bool ok(long long md,vector<int>&a,int t){
    long long rs = 0;
    for(int x:a){
        rs += md/x;
    }
    return rs >= t;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,t;
    cin>>n>>t;

    vector a(n,0);

    for(int&x:a)cin>>x;

    /* range -> (l,r] */
    long long l{0},r{*min_element(a.begin(),a.end())*1ll*t};
    while(r-l>1){
        long long md = l+((r-l)>>1);

        if(ok(md,a,t)){
            r=md;
        }else{
            l=md;
        }
    }

    cout<<r<<'\n';
}
