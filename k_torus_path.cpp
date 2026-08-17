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
        vector grid(n,vector<int>(n));
        vector visited(n,vector<bool>(n,false));
        long long sum = grid[0][0];
        for(int i = 0;i<n;i++){
                for(int j = 0;j<n;j++){
                        cin>>grid[i][j];
                        sum+=grid[i][j];
                }
        }
        int mn = INT_MAX;
        for(int i =0;i<n;i++){
                mn = min(mn, grid[i][n-i-1]);
        }
        sum-=mn;
        cout<<sum<<'\n';
}
