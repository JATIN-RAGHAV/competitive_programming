/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

// n = 5
// 101
// k = 3
bool is_palan(long long n,int k){
        for(int i =0;i<(k/2);i++){
                bool s = n&(1ll<<i);
                bool e = n&(1ll<<(k-1-i));
                if(s != e){
                        return false;
                }
        }
        if(k&1){
                return !(n&(1ll<<(k/2)));
        }
        return true;
}

void solve(){
        long long n;
        cin>>n;
        int k = 0;
        while((1<<(k+1))<=n)k++;
        bool p = false;
        k++;
        for(;k<64;k++){
                p = p || is_palan(n,k);
                if(p)break;
        }
        cout<<(p?"YES":"NO")<<'\n';
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

