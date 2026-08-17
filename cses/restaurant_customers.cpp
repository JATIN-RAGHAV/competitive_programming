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
    vector a(n,0),b(n,0);
    for(int i =0;i<n;i++){
        cin>>a[i]>>b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int ap{},bp{},mx{},c{};
    while(ap<n && bp<n){
        if(a[ap] < b[bp]){
            c++;
            mx = max(c,mx);
            ap++;
        }else if(a[ap] == b[bp]){
            ap++;
            bp++;
        }else{
            c--;
            bp++;
        }
    }
    cout<<mx<<'\n';
}
