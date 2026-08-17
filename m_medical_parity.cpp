/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        string x,y;
        cin>>x>>y;
        int n = x.size();
        int res = 0;
        bool p = false;
        int curr = 0;
        for(int i = 0;i<n;i++){
                if(x[i] == '1'){
                        p = !p;
                }
                if((y[i]=='1')!=p){
                        curr++;
                }
                else{
                        if(2<curr){
                                res += 2;
                                p = !p;
                        }
                        else if(2==curr){

                        }
                        else{
                                res += curr;
                        }
                        curr=0;
                }
        }
        res+=min(1,curr);
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

