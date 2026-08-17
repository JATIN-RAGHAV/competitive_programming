/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(m);
        for(int&x:a)cin>>x;
        for(int&x:b)cin>>x;
        int j = 0;
        for(int i = 0;i<n;i++){
                if(a[i] >= b[j]){
                        j++;
                }
                if(j==m)break;
        }
        if(j==m){
                cout<<"0\n";
                return;
        }
        if(m==1){
                cout<<b[0]<<'\n';
                return;
        }
        vector<int>p(m,n+1),s(m,-1);
        j = 0;
        for(int i =0;i<n;i++){
                if(a[i]>=b[j]){
                        p[j] = i;
                        j++;
                }
                if(j==m)break;
        }
        j = m-1;
        for(int i=n-1;i>=0;i--){
                if(a[i] >= b[j]){
                        s[j] = i;
                        j--;
                }
                if(j<0){
                        break;
                }
        }
        int res = INT_MAX;
        if(s[1]!=-1){
                res = min(res,b[0]);
        }
        if(p[m-2]<n){
                res = min(res,b.back());
        }
        for(int i = 1;i<m-1;i++){
                if(p[i-1] < s[i+1]){
                        res = min(res,b[i]);
                }
        }
        cout<<(res==INT_MAX?-1:res)<<'\n';
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
