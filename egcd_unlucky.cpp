/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<long long>p(n+2),s(n+2);
        for(int i =1;i<=n;i++)cin>>p[i];
        for(int i =1;i<=n;i++)cin>>s[i];
        bool ok = true;
        for(int i =1;i<=n;i++){
                long long a = lcm(p[i],s[i]);
                if(gcd(p[i-1],a)!=p[i]){
                        ok = false;
                        break;
                }
                if(gcd(s[i+1],a) != s[i]){
                        ok = false;
                        break;
                }
        }
        cout<<(ok?"YES":"NO")<<'\n';
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

