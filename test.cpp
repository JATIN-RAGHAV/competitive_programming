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


int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ordered_set<int> t;
        t.insert(1);
        t.insert(1);
        t.insert(1);
        t.insert(1);
        t.insert(1);
        t.insert(2);
        t.insert(2);
        t.insert(2);
        cout<<"order: "<<t.order_of_key(2)<<'\n';
}

