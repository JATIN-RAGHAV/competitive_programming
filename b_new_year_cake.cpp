/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int run(int x,int y){
        int res =0;
        long long cl = 1;
        bool xy = true;
        while(x>=0 && y>=0){
                if(xy){
                        if(x>=cl){
                                x-=cl;
                        }else{
                                break;
                        }
                }
                else{
                        if(y>=cl){
                                y-=cl;
                        }
                        else{
                                break;
                        }
                }
                xy=!xy;
                res++;
                cl<<=1;
        }
        return res;
}

void solve(){
        int x,y;
        cin>>x>>y;
        int res = max(run(x,y),run(y,x));
        cout<<res<<'\n';
}

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int tt;
        cin >> tt;
        while(tt--){
                solve();
        }
}

