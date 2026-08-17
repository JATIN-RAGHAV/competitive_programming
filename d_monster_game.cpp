/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <algorithm>
#include <bits/stdc++.h>
using namespace std; 
template<typename T>
ostream& operator<<(ostream& os,vector<T> a){
        if(!a.size()){
                os<<"[]";
        }
        else{
                os<<'['<<a[0];
                for(int i = 1;i<a.size();i++){
                        os<<','<<a[i];
                }
                os<<"]\n";
        }
        return os;
}

void solve(){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int&x:a)cin>>x;
        for(int&x:b)cin>>x;
        set<int>st(a.begin(),a.end());
        vector<int>diff(st.begin(),st.end());
        vector<int>sw(diff.size());
        int sz = diff.size();
        sort(a.begin(),a.end());
        for(int i = 0;i<sz;i++){
                int csw =  a.end() - lower_bound(a.begin(),a.end(),diff[i]);
                sw[i] = csw;
        }
        long long res =0;
        // pref[i] -> no. of swords required to reach level i
        vector<long long>pref(n+1);
        for(int i =0;i<n;i++){
                pref[i+1] = b[i] + pref[i];
        }
        for(int i = 0;i<sz;i++){
                long long killed = (--upper_bound(pref.begin(),pref.end(),sw[i])) - pref.begin();
                res = max(killed*diff[i],res);
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

