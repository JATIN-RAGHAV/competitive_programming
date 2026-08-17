/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int sum(int x){
    int sm = 0;
    while(x){
        int l = x%10;
        sm += l;
        x/=10;
    }
    return sm;
}

void solve(){
    int n;
    cin>>n;
    int range = 100;
    bool p = false;
    for(int i =1;i<=range;i++){
        if(sum(n+i) == i){
            p = true;
            break;
        }
    }
    cout<<(p?10:0)<<'\n';
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

