/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

const int MX = 1e6+5;
bitset<MX> poss;

void pre(){
    for(int k=2;k<MX;k++){
        long long sum = 1;
        long long c = k;
        sum += c + c*k;
        c*=k;
        while(sum < MX){
            poss[sum] = 1;
            c*=k;
            sum+=c;
        }
    }
}

void solve(){
    int n;
    cin>>n;

    cout<<(poss[n] ? "YES\n":"NO\n");
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pre();
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}
