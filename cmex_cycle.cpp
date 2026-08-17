/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,x,y;
        cin>>n>>x>>y;
        x--;y--;
        vector<int>a(n);
        for(int i =0;i<n;i++){
                if(i&1){
                        a[i] = 1;
                }
        }
        if(n&1){
                a[n-1] = 2;
        }
        if(a[x] == a[y]){
                if((n&1) && (!x || (x==n-2) || !y || (y==n-2))){
                        if(!x || (x==n-2)){
                                if(!x){
                                        a[x] = 2;
                                        a[n-1] = 0;
                                }
                                else{
                                        a[y] = 2;
                                }
                        }
                        else{
                                if(!y){
                                        a[y] = 2;
                                        a[n-1] = 0;
                                }
                                else{
                                        a[x] = 2;
                                }
                        }
                }
                else{
                        a[x] = 2;
                }
        }
        for(int i = 0;i<n;i++){
                cout<<a[i]<<" \n"[i==n-1];
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
