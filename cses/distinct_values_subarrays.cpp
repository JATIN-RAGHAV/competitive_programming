/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,c;
    cin>>n;
    map<int,int> pv{};
    int lst{};
    long long res{};
    long long cur{1};

    for(int i =1;i<=n;i++){
        cin>>c;
        if(lst < pv[c]){
            long long dst = pv[c] - lst;
            cur -= (dst*(dst+1))/2;
            lst = pv[c];
        }
        cur<<=1;
        res+=cur;
        pv[c] = i;
    }
    cout<<res<<'\n';
}
