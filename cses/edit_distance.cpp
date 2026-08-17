/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string a,b;
        cin>>a>>b;
        vector dp(a.size()+1,vector<int>(b.size()+1,max(a.size(),b.size())));
        // dp[i][j] = min steps requried to convert a[0-i] into b[0-j];
        dp[0][0] = 0;
        for(int i = 0;i<=a.size();i++){
                for(int j = 0;j<=b.size();j++){
                        if(i){
                                dp[i][j] = min(dp[i-1][j]+1,dp[i][j]);
                        }
                        if(j){
                                dp[i][j] = min(dp[i][j] , dp[i][j-1]+1);
                        }
                        if(i && j){
                                dp[i][j] = min(dp[i-1][j-1] + (int)(a[i-1] != b[j-1]),dp[i][j]);
                        }
                }
        }
        cout<<dp[a.size()][b.size()] <<'\n';
}
