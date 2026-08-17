/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
const int off = (1<<30);
void solve(){
        int n;
        cin>>n;
        vector<int>a(n);
        iota(a.begin(),a.end(),1);
        int i = 1;
        int even_xor = 0;
        int odd_xor = 0;
        for(;i<n-2;i++){
                if(!(i&1)){
                        even_xor ^= i;
                }
                else{
                        odd_xor ^= i;
                }
        }
        even_xor^=i;
        odd_xor ^=even_xor;
        a[n-3] = odd_xor+off;
        a[n-2] = i;
        a[n-1] = 0;
        if(odd_xor){
                a[n-1] = off;
        }
        else{
                a[0]+= off;
        }
        for(int i = 0;i<n;i++){
                cout<<a[i] <<" \n"[i==n-1];
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

