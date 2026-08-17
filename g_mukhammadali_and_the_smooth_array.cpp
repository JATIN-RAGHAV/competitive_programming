/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<int>a(n),cost(n);
        vector<bool>changed(n,false);
        for(int&x:a)cin>>x;
        for(int&x:cost)cin>>x;
        long long res = 0;
        for(int i = 1;i<n;i++){
                if(a[i] < a[i-1]){
                        long long prev = 0;
                        for(int j = 0;j<i;j++){
                                if((a[j]>a[i]) && !changed[j]){
                                        prev+=cost[j];
                                        changed[j] = true;
                                }
                        }
                        if(prev <= cost[i]){
                                res+=prev;
                        }
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

