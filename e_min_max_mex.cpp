/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

// checks if a can be divided into k parts and have m as the max MEX
vector<int> present(1e6);
bool ok(vector<int>& a,int m,int k){
        int cm = 0, n = a.size();
        int parts = 0;
        for(int i =0;i<n;i++){
                if(a[i] < m){
                        present[a[i]]++;
                }
                while(present[cm]){
                        cm++;
                }
                if(cm >= m){
                        parts++;
                        for(int j = 0; j<=min(n,m) ;j++){
                                present[j] = 0;
                        }
                        cm = 0;
                }
        }
        for(int i = 0;i<=n;i++){
                present[i] = 0;
        }
        return parts >= k;
}

void solve(){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        int r,l=0; // [l,r)
        r = (n/k)+1;
        while(r-l > 1){
                int m = l + (r-l)/2;
                if(ok(a,m,k)){
                        l = m;
                }
                else{
                        r = m;
                }
        }
        cout<< l <<'\n';
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

