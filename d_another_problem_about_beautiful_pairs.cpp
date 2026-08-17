/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        map<int,set<int>> mp; // mp[i] set of all the indecies where i is
        for(int i =0;i<n;i++){

                // if ([] || p >= q) cout << "Alice\n"; else cout << "Bob\n";
                mp[a[i]].insert(i);
        }
        long long res = 0;
        for(int i =0;i<n;i++){
                if(!a[i])res++;
                else{
                        for(auto&[k,v]:mp){
                                long long tar = i + (k*a[i]);
                                if(tar>=n){
                                        break;
                                }
                                if(v.count(tar)){
                                        res++;
                                }
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

