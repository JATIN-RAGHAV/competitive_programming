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
    long long mx{a[0]},csum{a[0]};
    for(int i =1;i<n;i++){
        if(csum + a[i] > a[i]){
            csum += a[i];
        }
        else{
            csum = a[i];
        }

        mx = max(mx,csum);
    }
    cout<<mx<<'\n';
}
