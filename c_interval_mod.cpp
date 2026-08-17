/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    long long n,k,p,q;
    cin>>n>>k>>p>>q;
    vector a(n,0ll);
    for(long long&x:a)cin>>x;
    long long sumbp = 0,sumbq=0,sumcp=0,sumcq=0;
    for(int i =0;i<k;i++){
        sumbp += a[i]%p;
        sumbq += a[i]%q;
    }
    int bp = 0;
    int bq = 0;
    sumcp = sumbp;
    sumcq = sumcq;
    for(int i = k;i<n;i++){
        sumcp -= (a[i-k]%p);
        sumcp += (a[i]%p);

        sumcq -= (a[i-k]%q);
        sumcq += (a[i]%q);

        if(sumcq < sumbq){
            sumbq = sumcq;
            bq = i;
        }

        if(sumcp < sumbp){
            sumbp = sumcp;
            bp = i;
        }
    }
    cout<<sumcp<<' '<<sumcq<<' '<<bq<<' '<<bp<<' ';
    int bi = bq;
    long long res = sumbq;
    if(sumbp < sumbq){
        bi = bp;
        res = sumbp;
    }

    // cout<<res<<' '<<bi<<' ';
    for(int i = 0;i<=bi-k;i++){
        res += 1ll*min(a[i]%p,a[i]%q);
    }
    for(int i = bi+1;i<n;i++){
        res += 1ll*min(a[i]%p,a[i]%q);
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

