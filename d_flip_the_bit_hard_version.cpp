/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
template <class T>
ostream& operator<<(ostream& os, vector<T>& v){
        if(v.size() == 0){
                os << "[]\n";
                return os;
        }
        os<<'[';
        for(int i = 0;i<v.size();i++){
                os<<v[i]<<",]"[i==v.size()-1];
        }
        return os;
}

void solve(){
    int n,k;
    cin>>n>>k;
    vector a(n,0);
    for(int&x:a)cin>>x;
    vector kk(k,0);
    for(int&x:kk)cin>>x;
    vector res(0,0);
    int c =0; // index for current special index in kk
    int o = a[kk[0]-1];
    for(int l=0,r=0;r<n;l=r){
        while(r<n && a[l] == a[r])r++;
        if(c<k && r>=kk[c]){
            res.push_back(-1);
            while(c<k && r>=kk[c])c++;
        }
        else{
            res.push_back(a[l]);
        }
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
