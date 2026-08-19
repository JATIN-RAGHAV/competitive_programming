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

    set<int> st{0,n};
    multiset<int> ms{n};

    int c;
    for(int i=0;i<k;i++){
        cin>>c;
        auto it = st.upper_bound(c);
        int r{*it};
        int l{*(--it)};
        st.insert(c);
        ms.erase(ms.find(r-l));
        ms.insert(r-c);
        ms.insert(c-l);

        cout<<*(--ms.end())<<" \n"[i==k-1];
    }
}
