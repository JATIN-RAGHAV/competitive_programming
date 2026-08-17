/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,x;
        cin>>n>>x;
        // a+b+c <= x
        // ab + bc + ac <= n
        // c = (n-ab)/(a+b)
        long long res = 0;
        // a -> [1,1e6]
        for(int a = 1;a<=min(x-2,(n-1)/2);a++){
                for(int b = 1;b<=(n/a);b++){
                        res += max(0,min(x-a-b, (n-a*b)/(a+b)));
                }
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

