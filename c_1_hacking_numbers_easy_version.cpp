/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        for(int i = 0;i<2;i++){
                int c;
                cout<<"digit"<<endl;
                cin>>c;
        }
        int x = 8;
        while(x>0){
                cout<<"add "<<-x<<endl;
                int c;
                cin>>c;
                x>>=1;
        }
        cout<<"add "<<n-1<<endl;
        int c;
        cin>>c;
        cout<<"!"<<endl;
        cin>>c;
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
