/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

bool isOk(long long p,long long diff){
    if(diff<1){
        return false;
    }
    return(p>=(diff*2));
}

void solve(){
    long long p,q;
    cin>>p>>q;
    long long diff = q-p;
    bool ok = false;
    if(isOk(p,diff) || (isOk(p,diff-2) && isOk(p,diff+2))){
        ok = true;
    }
    cout<<(ok?"Bob":"Alice")<<'\n';
    
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

