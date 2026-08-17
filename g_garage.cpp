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
        long long res = 0;
        if(n==1){
                res = 3;
        }
        else{
                n--;
                int x = n/3;
                res = 4*(x+1ll);
                int m = n%3;
                if(m==1){
                        res += 1;
                }
                else if(m==2){
                        res += 3;
                }
        }
        cout<<res<<'\n';
}
