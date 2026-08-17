/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+1!=c){
                cout<<"-1\n";
                return;
        }
        int k = 0;
        while((1<<k)<=a)k++;
        int h = k;
        b -= (1<<k)-1-a;
        if(b>0){
                h += (b+c-1)/c;
        }
        cout<<h<<'\n';
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

