/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i = 0;i<n;i++){
                cin>>a[i];
        }
        int c_or = 0;
        for(int k = 0;k<32;k++){
                int best = 0;
                int j = 0;
                for(int i = 0;i<n;i++){
                        if((a[i]|c_or) > (best|c_or)){
                                best = a[i];
                                j =i;
                        }
                }
                if(best){
                        cout<<best<<' ';
                        c_or |= best;
                        a[j] = -1;
                }
        }
        for(int i =0;i<n;i++){
                if(a[i] != -1){
                        cout<<a[i]<<' ';
                }
        }
        cout<<'\n';
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
