/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,q;
        cin>>n>>q;
        vector<long long>pref(n+1);
        int c;
        for(int i = 0;i<n;i++){
                cin>>c;
                pref[i+1] = pref[i] + c;
        }
        int l,r;
        while(q--){
                cin>>l>>r;
                cout<<pref[r] - pref[l-1]<<'\n';
        }
}
