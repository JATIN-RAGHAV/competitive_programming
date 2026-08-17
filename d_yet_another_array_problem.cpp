/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
const int range = 60;
void solve(){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(long long&x:a)cin>>x;
        int res = 2;
        bool done = false;
        for(;res<=range;res++){
                for(int i = 0;i<n;i++){
                        if(gcd(res,a[i])==1){
                                done = true;
                        }
                }
                if(done)break;
        }
        cout<<res<<'\n';
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

