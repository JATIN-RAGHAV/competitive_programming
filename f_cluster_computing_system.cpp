/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;
        cin>>n;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        vector<int>pref(n),prefp(n);
        pref[0] = a[0];
        prefp[n-1] = a.back();
        for(int i = 1;i<n;i++){
                pref[i] = gcd(pref[i-1],a[i]);
        }
        for(int i = n-2;i>=0;i--){
                prefp[i] = gcd(prefp[i+1],a[i]);
        }
        long long cost = pref[n-1];
        for(int i = 1;i<n-1;i++){
                cost += min(pref[i],prefp[i]);
        }
        cout<<cost<<'\n';
}
