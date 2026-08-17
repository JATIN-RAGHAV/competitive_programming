/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,m;
        cin>>n>>m;
        vector<int> a(n),b(m);
        for(int&x:a)cin>>x;
        for(int&x:b)cin>>x;
        vector dp(n+1,vector<int>(m+1));
        for(int i = 0;i<=n;i++){
                for(int j =0;j<=m;j++){
                        if(i){
                                dp[i][j] = max(dp[i][j],dp[i-1][j]);
                        }
                        if(j){
                                dp[i][j] = max(dp[i][j], dp[i][j-1]);
                        }
                        if(i && j){
                                dp[i][j] = max(dp[i][j], dp[i-1][j-1] + (int)(a[i-1] == b[j-1]));
                        }
                }
        }
        int opt = dp[n][m];
        int i = n,j=m;
        vector<int>res;
        while(i && j){
                if((a[i-1] == b[j-1]) && opt > dp[i-1][j] && opt > dp[i][j-1] && opt > dp[i-1][j-1]){
                        i--;
                        j--;
                        opt--;
                        res.push_back(a[i]);
                }
                else{
                        if(dp[i][j-1] == opt){
                                j--;
                        }
                        else{
                                i--;
                        }
                }
        }
        cout<<res.size()<<'\n';
        for(int i = res.size()-1;i>=0;i--){
                cout<<res[i] <<" \n"[!i];
        }
}
