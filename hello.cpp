#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n, m;
    cin >> n >> m;
    if(n > m || (n * (n + 1) / 2) < m){
        cout << "-1\n";
        return;
    }
    m -= n;
    vector<ll> a, b;
    for (int i = n - 1; i >= 0; i--){
        if(m >= i){
            m -= i;
            a.push_back(i);
        }
        else    b.push_back(i);
    }
    a.insert(a.end(), b.begin(), b.end());
    if(m != 0)    cout << "-1\n";
    else{
        cout << a[0] + 1 << "\n";
        for (int i = 0; i < n - 1; i++){
            cout << a[i] + 1 << " " << a[i + 1] + 1 << "\n";
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
