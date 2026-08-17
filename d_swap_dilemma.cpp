/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std; 
using namespace __gnu_pbds;
template<typename T> using ordered_set = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

void solve(){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        for(int&x:a)cin>>x;
        for(int&x:b)cin>>x;
        auto c = a;
        auto d = b;
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
        bool ok = c==d;
        if(!ok){
                cout<<"NO\n";
                return;
        }
        int inv_a=0,inv_b=0;
        ordered_set<int> oseta;
        ordered_set<int> osetb;
        for(int i = n-1;i>=0;i--){
                inv_a += oseta.order_of_key(a[i]);
                inv_b += osetb.order_of_key(b[i]);
                oseta.insert(a[i]);
                osetb.insert(b[i]);
        }
        int diff = abs(inv_a-inv_b);
        cout<<(diff&1?"NO":"YES")<<'\n';
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

