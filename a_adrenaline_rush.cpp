/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
const int N=1e3;
int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;
        cin>>n;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        vector<pair<int,int>>res;
        res.reserve(N*N);
        for(int i =0;i<n;i++){
                int j = i;
                while(j){
                        res.push_back({a[j-1],a[j]});
                        swap(a[j-1],a[j]);
                        j--;
                }
                j = 0;
                while(j+1<=i && a[j+1] < a[j]){
                        res.push_back({a[j],a[j+1]});
                        swap(a[j], a[j+1]);
                        j++;
                }
        }
        cout<<res.size()<<'\n';
        for(int i = res.size()-1;i>=0;i--){
                auto [x,y] = res[i];
                cout<<x<<' '<<y<<'\n';
        }
}
