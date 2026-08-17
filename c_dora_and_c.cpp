/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        long long n,a,b;
        cin>>n>>a>>b;
        long long x = gcd(a,b);
        set<int>s;
        int c;
        for(int i = 0;i<n;i++){
                cin>>c;
                s.insert(c%x);
        }
        vector vec(s.begin(),s.end());
        long long res = vec.back()-vec[0];
        for(int i = 0;i<vec.size()-1;i++){
                res = min(res,vec[i]+x-vec[i+1]);
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

