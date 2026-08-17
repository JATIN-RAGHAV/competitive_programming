/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
int range = 4e5;
vector fact(range,vector<int>{});
void fill(){
        for(int i = 2;i<range;i++){
                for(int c = 2;(c*1ll*i)<range;c++){
                        fact[c*i].push_back(i);
                }
        }
}

map<int,int>memo;
long long func(int i,set<int>&a){
        if(memo.count(i))return memo[i];
        if(a.count(i)){
                return 1;
        }
        long long res = INT_MAX;
        for(int x:fact[i]){
                res = min(res,func(x,a)+func(i/x,a));
        }
        memo[i] = res;
        return res;
}

void solve(){
        int n;
        cin>>n;
        set<int>a;
        int c;
        memo.clear();
        for(int i= 0;i<n;i++){
                cin>>c;
                a.insert(c);
        }
        long long res = 0;
        for(int i = 1;i<=n;i++){
                res = func(i,a);
                cout<<(res==INT_MAX?-1:res)<<" \n"[i==n];
        }
}

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        fill();
        int tt;
        cin >> tt;
        while(tt--){
                solve();
        }
}

