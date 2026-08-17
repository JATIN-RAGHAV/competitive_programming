/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

const int M = 1e9+7;
const int mx = 1e6+1;

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector res(mx,pair<long long,long long>());
        res[1].first = res[1].second = 1;
        // first is number possibilities which have a line in the middle
        // second is the number of possibilities which have no line in the middle
        for(int i = 2;i<mx;i++){
                auto [x,y] = res[i-1];
                res[i].first = 2*x + y;
                res[i].second = x + 4*y;
                res[i].first %= M;
                res[i].second %= M;
        }
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                auto [x,y] = res[n];
                cout<< (x+y)%M <<'\n';
        }
}
