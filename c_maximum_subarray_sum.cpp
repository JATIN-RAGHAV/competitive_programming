/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

long long kadane(vector<long long>&a){
        long long mx = 0;
        long long cmx = 0;
        int n = a.size();
        for(int i = 0;i<n;i++){
                if(a[i] > cmx + a[i]){
                        cmx = a[i];
                }
                else{
                        cmx+= a[i];
                }
                mx = max(mx, cmx);
        }
        return mx;
}

void solve(){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<long long>a(n);
        for(long long&x:a)cin>>x;
        int  cnt = count(s.begin(),s.end(),'0');
        if(!cnt){
                long long mx = kadane(a);
                if(mx == k){
                        cout<<"Yes\n";
                        for(int i =0;i<n;i++){
                                cout<<a[i]<<" \n"[i==n-1];
                        }
                }
                else{
                        cout<<"No\n";
                }
                return;
        }
        for(int i =0;i<n;i++){
                if(s[i] == '0'){
                        a[i] = INT_MIN;
                }
        }
        long long mx = kadane(a);
        if(mx > k){
                cout<<"No\n";
                return;
        }
        int x = s.find('0');
        long long l = (1ll*INT_MIN)-1;
        long long r = (1ll*1e15);
        // (l,r)
        while(r-l>2){
                long long m = l + (r-l)/2;
                a[x] = m;
                long long mx = kadane(a);
                if(mx > k){
                        r=m;
                }
                else if(mx < k){
                        l=m;
                }
                else{
                        l=m-1;
                        break;
                }
        }
        a[x] = l+1;
        cout<<"Yes"<<'\n';
        for(int i =0;i<n;i++){
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

