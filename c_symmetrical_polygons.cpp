/**
*	author: walrus137
* 	message: Yoo!!!
**/
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
        map<int,int>mp;
        int c;
        for(int i= 0;i<n;i++){
                cin>>c;
                mp[c]++;
        }
        int base_f = -1;
        int base_s = -1;
        long long ans = 0;
        bool p = false;
        for(auto it:mp){
                long long cnt = 0;
                if(it.second&1){
                        cnt = it.second-1;
                }
                else{
                        cnt = it.second;
                }
                if((ans && cnt) || (cnt>2))p=true;
                ans+=cnt*it.first;
        }
        if(ans){
                vector<int>vc;
                for(auto it:mp){
                        if(it.second&1){
                                vc.push_back(it.first);
                        }
                }
                bool used = false;
                for(int i = vc.size()-1;i>=0;i--){
                        if(!i){
                                if(ans>vc[i]){
                                        used = true;
                                        ans+=vc[i];
                                }
                        }
                        else if((ans+vc[i-1] > vc[i])){
                                ans+=vc[i-1]+vc[i] + 0ll;
                                used = true;
                                break;
                        }
                }
                if(!used && !p)ans=0;
        }
        cout<<ans<<'\n';
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

