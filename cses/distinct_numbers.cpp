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
    set<int>a;
    int c;
    for(int i =0;i<n;i++){
        cin>>c;
        a.insert(c);
    }
    cout<<a.size()<<'\n';
}
