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
    vector a(n+1,0);
    int c{};
    for(int i =0;i<n;i++){
        cin>>c;
        a[c] = i;
    }
    
    int res{1};
    for(int x =2;x<=n;x++){
        if(a[x] < a[x-1]){
            res++;
        }
    }
    cout<<res<<'\n';
}
