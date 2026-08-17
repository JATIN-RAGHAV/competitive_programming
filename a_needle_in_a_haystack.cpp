/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        string s,t;
        cin>>s>>t;
        bool p = true;
        multiset<char> ms(t.begin(),t.end());
        for(char c:s){
                auto it = ms.find(c);
                if(it == ms.end()){
                        cout<<"Impossible\n";
                        return;
                }
                ms.erase(it);
        }
        string res{};
        int i = 0;
        for(auto it = ms.begin();it!=ms.end();){
                if(i<s.size() && *it >= s[i]){
                        res += s[i++];
                }
                else{
                        res += *it;
                        it++;
                }
        }
        if(i<s.size()){
                res.append(s.begin()+i,s.end());
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

