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
template<typename T> using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin>>n>>k;
    vector<int> a(n);
    iota(a.begin(),a.end(),1);
    ordered_set<int>st{a.begin(),a.end()};
    
    auto it = st.find_by_order(k%n);
    while(!st.empty()){
        cout<<*it<<' ';

        int oo = st.order_of_key(*it);
        st.erase(it);
        if(st.empty())break;
        long long o = (oo+k)%(st.size());
        it = st.find_by_order(o);
    }
    cout<<endl;
}
