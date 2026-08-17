/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<long long>a(n),res(n);
        for(long long&x:a)cin>>x;
        res[0] = 1;
        int nw = 2;
        for(int i =1;i<n;i++){
                long long diff = a[i] - a[i-1];
                diff--;
                if(!(i-diff)){
                        res[i] = nw++;
                }
                else{
                        res[i] = res[i-diff-1];
                }
        }
        for(int i =0;i<n;i++){
                cout<<res[i]<<" \n"[i==n-1];
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

