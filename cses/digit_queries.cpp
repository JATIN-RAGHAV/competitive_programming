/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long MX = 1e18+1;
    long long i = 1; // current starting index.
    long long c = 1; // current number of digits in number.
    long long cnt = 9;
    vector<long long> ind{-1ll};
    while(i<MX){
        ind.push_back(i);
        i = i + (c * cnt);
        ++c;
        cnt *= 10;
    }

    int q;
    cin>>q;
    while(q--){
        long long k;
        cin>>k;

        auto it = upper_bound(ind.begin(),ind.end(),k);
        it--;
        int cnt = it - ind.begin();
        long long st = *it;
        long long diff = k - st;
        long long c = pow(10,cnt-1);
        c += (diff / cnt);
        int res = to_string(c)[diff % cnt] - '0';
        cout<<res<<'\n';
    }
}
