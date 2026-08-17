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

int get(vector<int>&a,vector<int>&b){
        int res = 0;
        int bi = 0;
        int n = a.size();
        for(int i = 0;i<n;i++){
                while(bi<n && b[bi]<=a[i])bi++;
                if(bi<n){
                        res++;
                        bi++;
                }
        }
        return n-res;
}

void solve(){
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(n);
        a[0] = 1;
        for(int i=1;i<n;i++)cin>>a[i];
        for(int&x:b)cin>>x;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        auto ac = a;
        int x = get(a,b);
        ac[0] = m;
        sort(ac.begin(),ac.end());
        int xm = get(ac,b);
        long long res = m*1ll*x;
        if(xm > x){
                // (l,r]
                int l = 1,r = m;
                while(r-l>1){
                        int md = l + (r-l)/2;
                        auto am = a;
                        am[0] = md;
                        sort(am.begin(),am.end());
                        if(get(am,b) == x){
                                l = md;
                        }
                        else{
                                r = md;
                        }
                }
                res += m-r+1;
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

