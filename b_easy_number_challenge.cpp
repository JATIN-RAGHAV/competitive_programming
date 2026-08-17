/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int range = 1e6+1;

    vector<int>v(range,0);
    for(int i =1;i<range;i++){
        for(int j = 1;(i*j)<range;j++){
            v[i*j]++;
        }
    }

    int a,b,c;
    cin>>a>>b>>c;

    long long res = 0;
    int M = 1<<30;
    // for(int i =0;i<range;i++){
    //     cout<<i<<','<<v[i]<<'\n';
    // }

    for(int i =1;i<=a;i++){
        for(int j = 1;j<=b;j++){
            for(int k =1;k<=c;k++){
                res += v[i*j*k];
            }
        }
    }
    cout<<res<<'\n';
}
