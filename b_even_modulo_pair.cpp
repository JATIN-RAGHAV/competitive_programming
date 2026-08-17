/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        int x,y=-1;
        int m = min(28,n);
        for(int i = 0;i<m;i++){
                for(int j = i+1;j<m;j++){
                        if(!((a[j] % a[i])&1)){
                                x = a[i];
                                y = a[j];
                                break;
                        }
                }
                if(y!=-1)break;
        }
        if(y!=-1){
                cout<<x<<' '<<y<<'\n';
        }
        else{
                cout<<-1<<'\n';
        }
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

