/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int best(vector<int>&x, int c){
        int bs = 0;
        for(int i =0;i<x.size();i++){
                if(abs(x[bs] - c) > abs(x[i] - c)){
                        bs = i;
                }
        }
        return bs;
}

void solve(){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int&x:a)cin>>x;
        for(int&x:b)cin>>x;
        vector<int>ch1{0,n-1,best(b,a[0])},
                ch2{0,n-1, best(b,a[n-1])};
        long long ans = INT_MAX*6ll;
        int b0 = best(a,b[0]);
        int bn = best(a,b[n-1]);
        for(int i:ch1){
                for(int j:ch2){
                        long long c_ans = abs(a[0] - b[i]) + abs(a[n-1] - b[j]);
                        if(i && j){
                                c_ans += abs(b[0] - a[b0]);
                        }
                        if(i<n-1 && j<n-1){
                                c_ans += abs(b[n-1] - a[bn]);
                        }
                        ans = min(ans,c_ans);
                }
        }
        cout<<ans<<'\n';
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
