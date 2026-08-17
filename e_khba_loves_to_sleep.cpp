/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

bool is_ok(int m,int k,int x,vector<int>&a){
        if(a[0]>=m){
                k-=a[0]-(m-1);
        }
        if(x-a.back()>=m){
                k-=(x-a.back()) - (m-1);
        }
        int n = a.size();
        for(int i = 1;i<n && k>0;i++){
                int diff = a[i] - a[i-1]-1;
                if(diff>(2*(m-1))){
                        k-=diff-(2*(m-1));
                }
        }
        return k<=0;
}

void solve(){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        sort(a.begin(),a.end());
        int l = 0,r = x+1;
        // [l-r)
        while(r-l>1){
                int m = l + (r-l)/2;
                if(is_ok(m,k,x,a)){
                        l = m;
                }
                else{
                        r = m;
                }
        }
        int mx = l;
        if(!mx){
                for(int i = 0;i<k;i++){
                        cout<<i<<" \n"[i==k-1];
                }
        }
        else{
                for(int i = 0;(i<=a[0]-mx) && k;i++){
                        cout<<i<<' ';
                        k--;
                }
                for(int i = 0;(i<=(x-a.back())-mx) && k;i++){
                        cout<<x-i<<' ';
                        k--;
                }
                for(int i = 0;i<(n-1)  && k;i++){
                        for(int j = a[i] + mx;(j+mx <=a[i+1]) && k;j++){
                                cout<<j<<' ';
                                k--;
                        }
                }
                cout<<'\n';
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

