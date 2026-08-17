/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

const int M = 1e9+7;

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,x;
        cin>>n>>x;
        vector<int> c(n);
        for(int&x:c)cin>>x;
        vector<int> dp(x+1);
        // dp[s] = number of ways to get to a sum of s
        dp[0] = 1;
        for(int s = 1;s<=x;s++){
                for(int x:c){
                        if(x<=s){
                                dp[s] += dp[s-x];
                                dp[s]%=M;
                        }
                }
        }
        cout<<dp[x]<<'\n';
}
