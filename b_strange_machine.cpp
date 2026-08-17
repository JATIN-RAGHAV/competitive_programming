/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
template<typename T>
ostream& operator<<(ostream& os,vector<T> a){
        if(!a.size()){
                os<<"[]";
        }
        else{
                os<<'['<<a[0];
                for(int i = 1;i<a.size();i++){
                        os<<','<<a[i];
                }
                os<<"]\n";
        }
        return os;
}

void solve(){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        vector<int>bs;
        for(int i =0;i<n;i++){
                if(s[i] == 'B'){
                        bs.push_back(i);
                }
        }
        while(q--){
                int x;
                cin>>x;
                int time = 0;
                if(bs.size()){
                        while(x>0){
                                int i = 0;
                                int mn = min(bs[0],x);
                                time += mn;
                                x-=mn;
                                for(;i<bs.size() && x>0;i++){
                                        x>>=1;
                                        time++;
                                        if(i<bs.size()-1){
                                                int mn = min(x,bs[i+1]-bs[i]-1);
                                                x-=mn;
                                                time+=mn;
                                        }
                                        else{
                                                int mn = min(n-1-bs[i],x);
                                                x-=mn;
                                                time+=mn;
                                        }
                                }
                        }
                }
                else{
                        time = x;
                }
                cout<<time<<'\n';
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

