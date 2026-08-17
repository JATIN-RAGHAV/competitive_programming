/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
#include <ctime>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        int arr[3]{1,2,3};
        int x;
        while(true){
                auto& [a,b,c] = arr;
                printf("? %d %d %d\n",a,b,c);
                fflush(stdout);
                cin>>x;
                if(x){
                        int i = rand()%3;
                        arr[i] = x;
                }
                else{
                        break;
                }
        }
        auto& [a,b,c] = arr;
        printf("! %d %d %d\n",a,b,c);
        fflush(stdout);
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

