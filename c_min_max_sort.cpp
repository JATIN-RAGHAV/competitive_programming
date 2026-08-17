/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,c;
        cin>>n;
        vector<int>a(n+1);
        for(int i = 1;i<=n;i++){
                cin>>c;
                a[c]=i;
        }
        int res =0;
        if(n&1){
                if(a[(n+1)/2]!=((n+1)/2)){
                        res = n/2;
                }
        }
        else{
                for(int i = n/2;i>0;i--){
                        // n+1-i;
                        if(a[n+1-i] < a[i]){
                                res = i;
                                break;
                        }
                        else if(a[i] != i && a[n+1-i]!=n+1-i){
                                res = i;
                                if(a[i] == 1 && a[n+1-i] == n)res--;
                                break;
                        }
                }
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

