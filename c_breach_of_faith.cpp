/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        int nn = 2*n;
        vector<int>a(nn);
        for(int&x:a)cin>>x;
        sort(a.begin(),a.end());
        vector<int>res(nn + 1);
        for(int i = 0;i<n;i++){
                res[2*i] = a[nn-1-i];
                res[2*i + 1] = a[n-1-i];
        }
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

