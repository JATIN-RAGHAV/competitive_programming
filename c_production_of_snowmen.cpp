/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<int>a(n),b(n),c(n);
        for(int&x:a)cin>>x;
        for(int&x:b)cin>>x;
        for(int&x:c)cin>>x;
        int ans = n;
        {
                int res = 0;
                for(int i =0;i<n;i++){
                        bool ok = true;
                        for(int j =0;j<n;j++){
                                if(b[(j+i)%n] <= a[j]){
                                        ok = false;
                                        break;
                                }
                        }
                        if(ok)res++;
                }
                ans*=res;
        }
        {
                int res = 0;
                for(int i =0;i<n;i++){
                        bool ok = true;
                        for(int j =0;j<n;j++){
                                if(c[(j+i)%n] <= b[j]){
                                        ok = false;
                                        break;
                                }
                        }
                        if(ok)res++;
                }
                ans*=res;
        }
        cout<<ans<<'\n';
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

