/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        string l,r;
        cin>>l>>r;
        int ans = 0;
        int n = l.size();
        for(int i =0;i<n;i++){
                if(r[i] < l[i]){
                        r[i]+=10;
                }
                int diff = r[i]-l[i];
                if(diff>1){
                        break;
                }
                if(diff==1){
                        ans++;
                        i++;
                        while(i<n && (r[i]=='0' && l[i] == '9')){
                                ans++;
                                i++;
                        }
                        break;
                }
                else{
                        ans+=2;
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

