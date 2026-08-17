/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
bool is_ok(long long m,int h,vector<int>&dmg,vector<int>&cld){
        long long dealt = 0;
        int n = dmg.size();
        for(int i = 0;i<n && dealt<h;i++){
                dealt += ((m+cld[i]-1)/cld[i])*dmg[i];
        }
        return dealt >= h;
}

void solve(){
        int h,n;
        cin>>h>>n;
        vector<int>dmg(n),cld(n);
        for(int&x:dmg)cin>>x;
        for(int&x:cld)cin>>x;
        long long l=0,r=1e13;
        while(r-l>1){
                long long m = l + (r-l)/2;
                if(is_ok(m,h,dmg,cld)){
                        r = m;
                }       
                else{
                        l = m;
                }
        }
        cout<<r<<'\n';
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

