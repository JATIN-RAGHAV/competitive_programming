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
        vector<int> dp(n+1,n+1);
        // dp[s] = minimum number of digits removed to make s = 0
        dp[0] = 0;
        for(int s = 1;s<=n;s++){
                int c = s;
                while(c){
                        int x = c%10;
                        dp[s] = min(dp[s],dp[s-x]+1);
                        c/=10;
                }
        }
        cout<<dp[n]<<'\n';
}
