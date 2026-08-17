/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    long long a,b,c,m;
    cin>>a>>b>>c>>m;
    long long lcmall = lcm(c,lcm(a,b));

    long long abase = (m/a)*6ll;
    abase -= ((m/lcm(a,b)) + (m/lcm(a,c))) * 3ll;
    abase += (m/lcmall)*2ll;

    long long bbase = (m/b)*6ll;
    bbase -= ((m/lcm(a,b)) + (m/lcm(b,c))) * 3ll;
    bbase += (m/lcmall)*2ll;

    long long cbase = (m/c)*6ll;
    cbase -= ((m/lcm(c,b)) + (m/lcm(a,c))) * 3ll;
    cbase += (m/lcmall)*2ll;

    cout<<abase<<' '<<bbase<<' '<<cbase<<'\n';
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

