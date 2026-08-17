/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 


int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>a(n);
        long long sm = 0;
        for(auto& [x,y]:a){
                cin>>x>>y;
                sm += y;
        }
        sort(a.begin(),a.end());
        int res = 1;
        int i = 0;
        while(sm>k){
                int l=i,r=i;
                long long csum = 0;
                while(r<n && a[r].first == a[l].first){
                        csum+=a[r].second;
                        r++;
                }
                sm-=csum;
                res = a[l].first+1;
                i=r;
        }
        cout<<res<<'\n';
}
