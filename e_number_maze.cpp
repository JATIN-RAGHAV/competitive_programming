/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <algorithm>
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        string n;
        int j,k;
        cin>>n>>j>>k;
        string first,second;
        first = second = n;
        while(--j){
                next_permutation(first.begin(),first.end());
        }
        while(--k){
                next_permutation(second.begin(),second.end());
        }
        int A,B;
        A=B=0;
        for(int i = 0;i<first.size();i++){
                if(first[i] == second[i]){
                        A++;
                }
        }
        B = first.size()-A;
        cout<<A<<'A'<<B<<'B'<<'\n';
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

