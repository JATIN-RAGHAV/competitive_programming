/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,c;
        cin>>n;
        vector<int> e,o;
        for(int i = 0;i<n;i++){
                cin>>c;
                if(c&1){
                        o.push_back(c);
                }
                else{
                        e.push_back(c);
                }
        }
        sort(o.rbegin(),o.rend());
        sort(e.rbegin(),e.rend());
        int ei = 0;
        long long sm = 0;
        if(o.size()){
                sm = o[0];
                cout<<sm<<' ';
                for(int k = 1;k<n;k++){
                        if(ei < e.size()){
                                sm += e[ei++];
                                cout<<sm<<' ';
                        }
                        else{
                                bool t = false;
                                for(;k<n;k++){
                                        if(!t){
                                                long long res = sm;
                                                if((n-k-1)){
                                                        if(e.size()){
                                                                res -= e.back();
                                                        }
                                                        else{
                                                                res = 0;
                                                        }
                                                }
                                                else{
                                                        res = 0;
                                                }
                                                cout<<res<<' ';
                                        }
                                        else{
                                                cout<<sm<<" ";
                                        }
                                        t = !t;
                                }
                        }
                }
                cout<<'\n';
        }
        else{
                for(int i = 0;i<n;i++){
                        cout<<0<<" \n"[i==n-1];
                }
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

