/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,k;
        cin>>n>>k;
        if(k&1){
                for(int i = 0;i<n-1;i++){
                        cout<<n<<' ';
                }
                cout<<n-1<<'\n';
                return;
        }
        else{
                for(int i = 0;i<n-2;i++){
                        cout<<n-1<<' ';
                }
                cout<<n<<' '<<n-1<<'\n';
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

