/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,k,mn,mx;
        cin>>n>>k>>mn>>mx;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        if(mx<k){
                cout<<"0\n";
                return;
        }
        int l = 0,r=0;
        set<int>s;
        multiset<int>ms;
        s.insert(a[0]);
        ms.insert(a[0]);
        long long ans = 0;
        if(k==1){
                ans++;
        }
        // 1 1 1
        // 1 1 1 1 1
        while(l<=n-k){
               if((r+1)<n && (ms.size()+1)<=mx){
                        if(s.count(a[r+1])){
                                ms.insert(a[r+1]);
                                r++;
                        }
                        else{
                                while(s.size()==k && (l+1<=(r+1))){
                                        auto it = ms.find(a[l]);
                                        ms.erase(it);
                                        it = ms.find(a[l]);
                                        if(it!=ms.end()){
                                                if((ms.size()>=mn) && (ms.size()<=mx)){
                                                        ans++;
                                                }
                                        }
                                        else{
                                                s.erase(a[l]);
                                        }
                                        l++;
                                }
                                r++;
                                s.insert(a[r]);
                                ms.insert(a[r]);
                        }
                        if((s.size()==k) && (ms.size()>=mn) && (ms.size()<=mx)){
                                ans++;
                        }
                }
                else{
                        if((r+1)==n){
                                while(s.size()==k && (l+1<n)){
                                        auto it = ms.find(a[l]);
                                        ms.erase(it);
                                        it = ms.find(a[l]);
                                        if(it!=ms.end()){
                                                if((ms.size()>=mn) && (ms.size()<=mx)){
                                                        ans++;
                                                }
                                        }
                                        else{
                                                s.erase(a[l]);
                                        }
                                        l++;
                                }
                                break;
                        }
                        else{
                                auto it = ms.find(a[l]);
                                ms.erase(it);
                                if(ms.find(a[l])!=ms.end()){
                                        if((s.size()==k)&&(ms.size()>=mn) && (ms.size()<=mx)){
                                                ans++;
                                        }
                                }
                                else{
                                        s.erase(a[l]);
                                }
                                l++;
                        }
                }
                cout<<l<<' '<<r<<endl;
                cout<<s.size()<<' '<<ms.size()<<endl;
                cout<<ans<<endl;
        }
        cout<<ans<<endl;
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

