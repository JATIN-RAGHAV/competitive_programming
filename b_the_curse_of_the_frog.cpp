/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        long long n,x;
        cin>>n>>x;
        long long a,b,c;
        long long sum = 0;
        long long mxr = 0;
        for(int i =0;i<n;i++){
                cin>>a>>b>>c;
                if(sum < x){
                        sum += a*(b-1);
                        mxr = max(mxr, a*b - c );
                }
        }
        long long res = 0;
        if(sum < x){
                if(mxr > 0){
                        long long diff = x - sum;
                        res = (diff+mxr-1)/mxr;
                }
                else{
                        res = -1;
                }
        }
        cout<<res<<'\n';
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

