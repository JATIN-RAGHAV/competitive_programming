/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        int k = 0;
        while((1<<(k+1))<n)k++;
        vector sparse(k+1,vector<int>(n));
        sparse[0] = a;
        for(int kk = 1;kk<=k;kk++){
                for(int i = 0;(i-1+(1<<kk))<n;i++){
                        sparse[kk][i] = min(sparse[kk-1][i], sparse[kk-1][i+(1<<(kk-1))]);
                }
        }
        while(q--){
                int l,r;
                cin>>l>>r;
                int k = 0;
                while((1<<(k+1))<(r-l+1))k++;
                cout << min(sparse[k][l-1],sparse[k][r-(1<<k)])<<'\n';
        }
}
