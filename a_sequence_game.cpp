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
        int x;
        cin>>x;
        bool present ,low,high;
        present = low = high = false;
        for(int i:a){
                if(i==x){
                        present = true;
                        break;
                }
                else if(i<x){
                        low = true;
                }
                else{
                        high = true;
                }
        }
        cout<<((present || (low && high))?"YES":"NO")<<'\n';
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

