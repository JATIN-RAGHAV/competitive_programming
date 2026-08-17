/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,h,l;
        cin>>n>>h>>l;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        if(h>l)swap(h,l);
        int res = 0;
        int sh = 0;
        int sl = 0;
        for(int i = 0;i<n;i++){
                if(a[i]<=h)sh++;
                if(a[i]<=l)sl++;
        }
        res = min(sh,sl-sh);
        sh-=res;
        res+=sh/2;
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

