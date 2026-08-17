/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){

        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string s,t;
        cin>>s>>t;
        string res = "";
        bool p = false;
        map<int,int>mp;
        int n = t.size();
        for(int i = 0;i<n-1;i++){
                mp[t[i]] = i;
        }
        for(int i = 1;i<s.size();i++){
                if(mp.count(s[i])){
                        int c_len = i+1+n-1-mp[s[i]];
                        if(c_len<res.size() || !p){
                                p = true;
                                res = string{s.begin(),s.begin()+i+1};
                                res+=string{t.begin()+mp[s[i]]+1,t.end()};
                        }
                }
        }
        if(res.size()){
                cout<<res<<'\n';
        }
        else{
                cout<<-1<<'\n';
        }
}
