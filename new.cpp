/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n;
        cin>>n;
        vector<pair<int,int>> edges;
        vector<bool> used(n+1,false);
        used[n] = true;
        while(edges.size()<n-1){
                int i = 1;
                while(i<n && used[i])i++;
                int a = i;
                int b = n;
                while(a<n){
                        if(used[a])break;
                        cout<<"? "<<a<<' '<<b<<endl;
                        int x;
                        cin>>x;
                        if(x == a){
                                edges.push_back({a,b});
                                used[a] = true;
                                a = b;
                                b = n;
                        }
                        else{
                                b = x;
                        }
                }
        }
        cout<<"! ";
        for(auto [x,y]:edges){
                cout<<x<<' '<<y<<' ';
        }
        cout<<endl;
}

int main(){
        cin.tie(nullptr);
        int tt;
        cin >> tt;
        while(tt--){
                solve();
        }
}

