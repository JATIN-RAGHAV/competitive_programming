/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

bool is_valid(int m, vector<int>&l, vector<int>&r){
        int n = l.size();
        int cnt = 0;
        for(int i =0;i<n;i++){
                if((min(i,l[i]) + min(n-i-1,r[i]) + 1) >= m){
                        cnt++;
                }
        }
        return cnt>=m;
}

void solve(){
        int n;
        cin>>n;
        vector<int>l(n),r(n);
        for(int i = 0;i<n;i++){
                cin>>r[i]>>l[i];
        }
        int left = 0;
        int right = n+1;
        while(right - left>1){
                int m = left + (right - left)/2;
                if(is_valid(m,l,r)){
                        left = m;
                }
                else{
                        right = m;
                }
        }
        cout<<left<<'\n';
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

