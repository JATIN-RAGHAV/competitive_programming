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
    cin>>n;
    multiset<int> st;
    int c;

    for(int i =0;i<n;i++){
        cin>>c;
        auto it = st.upper_bound(c);
        if(it != st.end()){
            st.erase(it);
        }
        st.insert(c);
    }
    
    cout<<st.size()<<'\n';
}
