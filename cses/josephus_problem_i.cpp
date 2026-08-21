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
    vector<int> a(n);
    iota(a.begin(),a.end(),1);
    set<int> st{a.begin(),a.end()};

    auto it = st.begin();
    it++;
    while(!st.empty()){
        if(it == st.end())it = st.begin();

        cout<<*it<<' ';

        auto pv = it;
        it++;
        st.erase(pv);
        if(st.empty())break;
        if(it == st.end()){
            it = st.begin();
            it++;
        }else{
            it++;
        }
    }
    cout<<'\n';
}
