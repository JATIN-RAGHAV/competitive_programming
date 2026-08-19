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
    map<int,int> mp;
    int c,last{},best{};
    for(int i=1;i<=n;i++){
        cin>>c;
        
        last = max(last, mp[c]);
        best = max(best, i-last);
        mp[c] = i;
    }
    cout<<best<<'\n';
}
