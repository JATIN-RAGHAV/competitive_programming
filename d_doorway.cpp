/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;
        cin >>n;
        vector lrs(n,vector<int>());
        vector bnds(n,pair<int,int>());
        for(int i = 0;i<n;i++){
                int c;
                cin>>c;
                cin>>bnds[i].first>>bnds[i].second;
                int x;
                for(int j = 0;j<c;j++){
                        cin>>x;
                        lrs[i].push_back(x);
                }
        }
}
