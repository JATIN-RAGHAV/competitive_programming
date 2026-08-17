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

    set<int> s;
    int x;
    for(int i =0;i<m;i++){
        cin>>x;
        s.insert(x);
    }

    int c = 0;
    int res = 0;
    while(c<n && res!=-1){
        for(int i =6;i>0;i--){
            if(s.contains(c+i)){
                if(i == 1){
                    res = -1;
                    break;
                }
                continue;
            }
            else{
                c+=i;
                res++;
                break;
            }
        }
    }
    cout<<res<<'\n';
}
