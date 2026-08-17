/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
const int M = 998244353;
void solve(){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int&x:a)cin>>x;
        for(int&x:b)cin>>x;
        int ans = 2;
        for(int i= 1;i<n;i++){
                int g1 = (a[i]>=a[i-1]) + (a[i] >=b[i-1]);
                int g2 = (b[i]>=a[i-1]) + (b[i] >=b[i-1]);
                if(!g1 || !g2){
                        ans = 0;
                        break;
                }
                if(g1 == g2){
                        if(g1==2){
                                ans<<=1;
                                ans%=M;
                        }
                }
        }
        cout<<ans<<'\n';
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

