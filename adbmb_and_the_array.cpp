/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        long long sm = accumulate(a.begin(),a.end(),0ll);
        long long diff = s-sm;
        if(diff<0 || (diff%x)){
                cout<<"NO\n";
        }
        else{
                cout<<"YES\n";
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

