/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        long long sx,sy,ex,ey;
        cin>>sx>>sy>>ex>>ey;
        vector<int>a(n);
        long long sm = 0;
        for(int&x:a){
                cin>>x;
                sm+=x;
        }
        int mx = *max_element(a.begin(),a.end());
        double dist = sqrt((sx-ex)*(sx-ex) + (sy-ey) * (sy-ey));
        long long inner = max(0ll,mx-(sm-mx));
        long long outer = sm;
        cout<<((dist>=inner) && (dist<=outer)?"Yes":"No")<<'\n';
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

