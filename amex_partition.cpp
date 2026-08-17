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
        bool zr = false;
        for(int i = 0;i<n;i++){
                cin>>a[i];
                if(!a[i]){
                        zr = true;
                }
        }
        int res = 0;
        if(zr){
                sort(a.begin(),a.end());
                int mx = 0;
                for(int i = 0;i<n;){
                        while(i<n && (a[i] == mx)){
                                i++;
                        }
                        if(i<n){
                                if(a[i]-mx == 1){
                                        mx++;
                                }
                                else{
                                        mx++;
                                        break;
                                }
                        }
                        else{
                                mx++;
                        }
                }
                res = mx;
        }
        cout<<res<<'\n';
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

