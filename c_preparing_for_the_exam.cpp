/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a(m);
        for(int&x:a)cin>>x;
        vector<bool>know(n,false);
        int c;
        for(int i =0;i<k;i++){
                cin>>c;
                c--;
                know[c]=true;
        }
        string res;
        if(k==n){
                res.assign(m,'1');
        }
        else if(n-k>1){
                res.assign(m,'0');
        }
        else{
                for(int i =0;i<m;i++){
                        if(know[a[i]-1]){
                                res+='0';
                        }
                        else{
                                res+='1';
                        }
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

