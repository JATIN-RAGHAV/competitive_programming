/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

const int M = 998244353;

void solve(){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        vector<int>suf(n);
        int sum = 0;
        int c3 = 0;
        for(int i = n-1;i>=0;i--){
                c3 += a[i] == 3;
                if(a[i] == 2){
                        sum += (sum + c3);
                        sum%=M;
                }
                suf[i] = sum;
        }
        int res = 0;
        for(int i = n-1;i>=0;i--){
                if(a[i] == 1){
                        res += suf[i];
                        res%=M;
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
