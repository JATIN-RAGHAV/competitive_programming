/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<int>a(1,INT_MIN);
        int c;
        for(int i =0;i<n;i++){
                cin>>c;
                if(a.back() != c)a.push_back(c);
        }
        a.push_back(INT_MIN);
        int ans =0;
        for(int i = 1;i<a.size()-1;i++){
                if((a[i] > a[i-1]) && (a[i] > a[i+1]))ans++;
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
