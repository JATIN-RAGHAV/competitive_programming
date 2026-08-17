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
        vector dp(n+1,vector<int>(7));
        fill(dp[0].begin(),dp[0].end(),1);
        for(int i = 1;i<7;i++){
                for(int s = 1;s<=n;s++){
                        for(int x = 1;x<=i && x<=s;x++){
                                dp[s][i] += dp[s-x][i];
                        }
                }
        }
        cout<<dp[n].back()<<'\n';
}
