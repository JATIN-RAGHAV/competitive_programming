/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a(k);
        // a[i] = position of the ith card from top
        int c;
        for(int i =0;i<k;i++){
                cin>>c;
                c--;
                a[c] = i;
        }
        int rem = 0;
        long long mx = (n*m)-4;
        bool ok = true;
        for(int i = k-1;i>=0;i--){
                if(a[i]-rem > mx){
                        ok = false;
                        break;
                }
                rem++;
        }
        cout<<(ok?"YA":"TIDAK")<<'\n';
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

