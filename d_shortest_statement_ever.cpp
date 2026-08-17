/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        long long a,b;
        cin>>a>>b;
        long long q;
        q = b;
        for(int i =0;i<32;i++){
                if((1ll<<i)&a&b){
                        q = q^(1ll<<i);
                }
        }
        // q-> 0
        // a-> 1
        // or -> 1&1
        for(int i =0;i<40;i++){
                if(((1ll<<i)&(a|q)) == 0){
                        long long odiff = abs(q-b);
                        long long ndiff = abs(b - ((1ll<<i)|q));
                        if(ndiff<odiff){
                                q = q|(1ll<<i);
                                
                        }
                }
        }
        cout<<a<<' '<<q<<'\n';
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

