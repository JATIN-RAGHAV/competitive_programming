/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
const int M = 1e9+7;
void solve(){
        string s;
        cin>>s;
        int n = s.size();
        map<int,long long>mp;
        mp[0]=1;
        long long res = 0;
        int c = 0;
        for(int i = 0;i<n;i++){
                if(s[i] == '1'){
                        c++;
                }
                else{
                        c--;
                }
                res += (mp[c] * (n-i))%M;
                res%=M;
                mp[c] += i+2;
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

