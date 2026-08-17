/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int&x:a)cin>>x;
        for(int&x:b)cin>>x;
        vector<int>linka(n),linkb(n);
        for(int i = 0;i<n;i++){
                linka[i] = a[i];
                linkb[i] = b[i];
                if(i&1){
                        swap(linka[i],linkb[i]);
                }
        }
        vector<int>inda(n+1,-1),indb(n+1,-1);
        int best = 0;
        for(int i = 0;i<n;i++){
                if(i>1){
                        best = max(best, indb[linkb[i]]+1);
                }
                if(i){
                        indb[linkb[i-1]] = i-1;
                }
        }
        indb[linkb.back()] = n-1;
        for(int i = 0;i<n;i++){
                best = max(best, min(i, indb[linka[i]])+1);
                if(i>1){
                        best = max(best, inda[linka[i]]+1);
                }
                if(i){
                        inda[linka[i-1]]=i-1;
                }
        }
        cout<<best<<'\n';
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
