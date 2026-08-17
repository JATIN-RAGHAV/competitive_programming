/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector a(m,0);
    multiset<int> ms{};
    int c;
    for(int i =0;i<n;i++){
        cin>>c;
        ms.insert(c);
    }
    for(int&x:a)cin>>x;

    for(int i = 0;i<m;i++){
        auto it = ms.upper_bound(a[i]);
        if(it != ms.begin()){
            it--;
            cout<<(*it)<<'\n';
            ms.erase(it);
        }else{
            cout<<"-1\n";
        }
    }
}
