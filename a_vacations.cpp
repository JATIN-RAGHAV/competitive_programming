/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <algorithm>
#include <bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector a(n,0);
    for(int&x:a)cin>>x;

    vector dp{0,0,0};

    for(int i = 0;i<n;i++){
        int fst = dp[0] + 1;
        int sec = dp[0] + 1;
        int thr = dp[0] + 1;

        fst = (*min_element(dp.begin(),dp.end()))+1;

        if(a[i] == 1 || a[i] == 3){
            sec = min(sec,dp[0]);
            sec = min(sec,dp[2]);
            sec = min(sec,dp[1]+1);
        }
        else if(a[i] == 2 || a[i] == 3){
            thr = min(thr,dp[0]);
            thr = min(thr,dp[1]);
            thr = min(thr,dp[2]+1);
        }

        cout<<fst<<' '<<sec<<' '<<thr<<'\n';
        dp[0] = fst;
        dp[1] = sec;
        dp[2] = thr;
    }

    int res = *min_element(dp.begin(),dp.end());
    cout<<res<<'\n';
}
