/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
namespace rn = std::ranges;

void solve(){
     int n;
     cin>>n;
     string s;
     cin>>s;
     int c1 = rn::count(s,'1');
     int c0 = rn::count(s,'0');
     char fnd = '1';
     int cnt = c1;
     if(c1&1){
         if(c0&1){
             fnd = '0';
             cnt = c0;
         }
         else{
             cout<<"-1\n";
             return;
         }
     }
     cout<<cnt<<'\n';
     for(int i = 0;i<n;i++){
         if(s[i] == fnd){
             cnt--;
             cout<<i+1<<" \n"[!cnt];
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

