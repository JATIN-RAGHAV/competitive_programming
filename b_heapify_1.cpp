/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin>>n;
    vector<long long>a(n+1);
    for(int i =1;i<=n;i++){
        int c;
        cin>>c;
        a[c] = i;
    }
    bool pos = true;
    for(int i =1;i<=n;i++){
        bool found = false;
        bool right = !(i&1);
        for(int x = 0;x<30;x++){
            if(a[i] == (i*1ll << x)){
                found = true;
                break;
            }
            if(right && (a[i] == (i*1ll >> x))){
                found = true;
                break;
            }
            if((i*1ll >> x)&1){
                right = false;
            }
        }
        if(!found){
            pos = false;
            break;
        }
    }
    cout<<(pos?"YES":"NO")<<'\n';
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

