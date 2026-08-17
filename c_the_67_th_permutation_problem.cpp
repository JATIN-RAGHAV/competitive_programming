/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin>>n;
    int f = 1,l=3*n;
    vector<int>res(n*3);
    for(int i =0;i<n*3;i+=3){
        res[i]=f;
        res[i+1] = l-1;
        res[i+2] = l;
        f++;
        l-=2;
    }
    int sz = 3*n;
    for(int i =0;i<3*n;i++){
        cout<<res[i]<<" \n"[i==sz-1];
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

