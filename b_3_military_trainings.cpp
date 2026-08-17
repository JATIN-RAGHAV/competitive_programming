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
        vector<int>a(n);
        for(int&x:a)cin>>x;
        long long res = n*(n-1ll);
        for(int i =0;i<n;i++){
                long long save = (n-a[i])*(a[i] - 1ll) + ((a[i]-1)*(a[i]-2))/2;
                res -= save;
        }
        cout<<res<<'\n';
}
