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
    vector a(n,0);
    for(int&x:a)cin>>x;

    sort(a.begin(),a.end());

    long long c{1};
    for(int i=0;i<n;i++){
        if(a[i] <= c){
            c+=a[i];
        }else{
            break;
        }
    }
    cout<<c<<'\n';
}
