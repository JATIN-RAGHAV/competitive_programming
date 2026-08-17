/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
#include <print>
using namespace std; 
template <class T>
ostream& operator<<(ostream& os, vector<T>& v){
        if(v.size() == 0){
                os << "[]\n";
                return os;
        }
        os<<'[';
        for(int i = 0;i<v.size();i++){
                os<<v[i]<<",]"[i==v.size()-1];
        }
        return os;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,W;
    cin>>n>>W;
    vector<int> w(n),v(n),t(n);
    for(int&x:w)cin>>x;
    for(int&x:v)cin>>x;
    for(int&x:t)cin>>x;

    vector dp(n+1,vector(W+1,0)); // dp[i][w] -> best value when items selected
    // (0,i) and max Weight is w
    stack<int> chosen;
    for(int i =1;i<=n;i++){
        for(int ww = w[i-1];ww<=W;ww++){
            if(t[i-1]){
                int z = 1;
                dp[i][ww] = dp[i-1][ww];
                while(z*w[i-1] <= ww){
                    if(dp[i][ww] < dp[i][ww-(z*w[i-1])] + z*v[i-1]){
                        dp[i][ww] = dp[i][ww-(z*w[i-1])] + z*v[i-1];
                        z++;
                        if(!chosen.empty()){
                            chosen.pop();
                        }
                    }
                    else{
                        break;
                    }
                }
                while(z>1){
                    chosen.push(i-1);
                    z--;
                }
            }else{
                if(dp[i-1][ww] < dp[i][ww-w[i-1]] + v[i-1]){
                    dp[i][ww] = dp[i][ww-w[i-1]] + v[i-1];
                    if(!chosen.empty()){
                        chosen.pop();
                    }
                    chosen.push(i-1);
                }
            }
        }
    }
    cout<<dp[n][W]<<'\n';
    cout<<chosen.size()<<'\n';
    vector res(0,0);
    while(!chosen.empty()){
        res.push_back(chosen.top());chosen.pop();
    }
    for(int i =res.size()-1;i>=0;i--){
        cout<<res[i]<<" \n"[i==0];
    }
}
