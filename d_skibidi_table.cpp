/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
// 1 4
// 3 2

long long which(int x,int y,int n){
        long long l = 1;
        long long r = 1ll<<(2*n);
        int xl,xr,yl,yr;
        xl=yl=1;
        xr=yr=(1<<n);
        int c_diff = 1<<(n-1);
        while(r>l){
                long long sz = (r-l+1)/4;
                if(x >= (xl+c_diff)){
                        if(y >= (yl+c_diff)){
                                xl += c_diff;
                                yl += c_diff;
                                l+=sz;
                                r=l+sz-1;
                        }
                        else{
                                xl += c_diff;
                                yr -= c_diff;
                                l += 2*sz;
                                r = l+sz-1;
                        }
                }
                else{
                        if(y >= (yl+c_diff)){
                                xr -= c_diff;
                                yl += c_diff;
                                l+=3*sz;
                                r=l+sz-1;
                        }
                        else{
                                xr -= c_diff;
                                yr -= c_diff;
                                r = l+sz-1;
                        }
                }
                c_diff>>=1;
        }
        return l;
}

pair<int,int> where(long long x,int n){
        long long l = 1;
        long long r = 1ll<<(2*n);
        int xl,xr,yl,yr;
        xl=yl=1;
        xr=yr=(1<<n);
        int c_diff = 1<<(n-1);
        // [l,r]
        while(r>l){
                long long sz = (r-l+1)/4;
                if((x>=l) && (x<(l+sz))){
                        r=l+sz-1;
                        xr-=c_diff;
                        yr-=c_diff;
                }
                else if((x>=(l+sz)) && (x<(l+sz+sz))){
                        l = l+sz;
                        r = l+sz-1;
                        xl+=c_diff;
                        yl+=c_diff;
                }
                else if((x>=(l+sz+sz)) && (x<(l+(3*sz)))){
                        l = l+(2*sz);
                        r = l+sz-1;
                        xl += c_diff;
                        yr -= c_diff;
                }
                else{
                        l = l + (3*sz);
                        r = l + sz -1;
                        yl += c_diff;
                        xr -= c_diff;
                }
                c_diff>>=1;
        }
        return {xl,yl};
}

void solve(){
        int n;
        cin>>n;
        int q;
        cin>>q;
        string s;
        while(q--){
                cin>>s;
                if(s=="->"){
                        int x,y;
                        cin>>x>>y;
                        long long res = which(x,y,n);
                        cout<<res<<'\n';
                }
                else{
                        long long d;
                        cin>>d;
                        auto [x,y]=where(d,n);
                        cout<<x<<' '<<y<<'\n';
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

