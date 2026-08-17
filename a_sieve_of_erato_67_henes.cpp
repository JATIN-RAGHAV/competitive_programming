/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin>>n;
    bool pos = false;
    for(int i =0;i<n;i++){
        int c;
        cin>>c;
        if(c==67)pos=true;
    }
    cout<<(pos?"YES":"NO")<<"\n";
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

