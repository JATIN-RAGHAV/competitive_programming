/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(long long&x:a)cin>>x;
        long long sum = accumulate(a.begin(),a.end(),0ll);
        set<long long>s;
        long long cmad = 0;
        for(long long i = 0;i<n;i++){
                if(s.count(a[i])){
                        cmad = max(cmad,a[i]);
                }
                s.insert(a[i]);
                a[i] = cmad;
        }
        for(long long l=0,r=0;r<n;l=r){
                while(r<n && a[r] == a[l])r++;
                sum += (r-l)*1ll*a[l];
                if(l!=0){
                        a[l] = a[l-1];
                }
        }
        for(long long l=0,r=0;r<n;l=r){
                while(r<n && a[r] == a[l])r++;
                if(r-l>1){
                        long long x = r-l;
                        sum += a[l] * 1ll * (x*(n-r+1) + ((x-1)*x)/2);
                }        
                else{
                        sum += a[l];
                }
        }
        cout<<sum<<'\n';
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

