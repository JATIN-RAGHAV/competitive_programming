/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
#include <numeric>
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
        long long n;
        cin>>n;
        vector<long long>f(n),a(n);
        for(long long&x:f)cin>>x;
        a[0] = a[n-1] = 0;
        for(int i = 1;i<(n-1);i++){
                a[i] = ((-2*f[i]) + f[i-1] + f[i+1])/2;
        }
        long long f1 = 0;
        for(int i = 0;i<n-1;i++){
                f1 += i*1ll*a[i];
        }
        a[n-1] = (f[0]-f1)/(n-1);
        long long f2 = 0;
        for(int i = 1;i<n;i++){
                f2 += (i-1)*1ll*(a[i]);
        }
        a[0] = f[1] - f2;
        for(int i = 0;i<n;i++){
                cout<<a[i]<<" \n"[i==n-1];
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

