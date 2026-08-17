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
        int n;
        cin>>n;
        map<int,int>mp;
        int c;
        for(int i =0;i<n;i++){
                cin>>c;
                mp[c]++;
        }
        auto it = mp.begin();
        while(it!=mp.end()){
                if(it->second<2){
                        auto pv = it;
                        it++;
                        n-=pv->second;
                        mp.erase(pv);
                }
                else{
                        it++;
                }
        }
        if(n<8){
                cout<<"NO\n";
                return;
        }
        bool p = true;
        it = mp.begin();
        int sm1,sm2,mx1,mx2;
        vector<int>num(4,0);
        if(it->second>3){
                num[0]=num[1]=it->first;
                it->second-=4;
        }
        else{
                num[0]=it->first;
                it->second-=2;
                it++;
                if(it->second>=2){
                        num[1]=it->first;
                        it->second-=2;
                }
                else{
                        p=false;
                }
        }
        if(p){
                auto bg = mp.rbegin();
                if(bg->second>3){
                        num[2]=num[3] = bg->first;
                        bg->second-=4;
                }
                else{
                        num[2]=bg->first;
                        bg->second-=2;
                        bg++;
                        if(bg->second>=2){
                                num[3]=bg->first;
                                bg->second-=2;
                        }
                        else{
                                p=false;
                        }
                }
        }
        if(p){
                vector<int>res = num;
                for(int i = 0;i<3;i++){
                        int s = (i+1)%3 + 1;
                        int t = (i+2)%3 + 1;
                        double ratio = abs(res[0] - res[1])/(double)abs(num[0] - num[i+1]);
                        double ratio2 = abs(num[s] - num[t])/(double)abs(res[2] - res[3]);
                        if(ratio < ratio2 ){
                                res[1] = num[i+1];
                                res[2] = num[s];
                                res[3] = num[t];
                        }
                }
                cout<<"YES\n";
                for(int i = 0;i<2;i++){
                        for(int j = 2;j<4;j++){
                                cout<<res[i]<<' '<<res[j]<<' ';
                        }
                }
                cout<<'\n';
        }
        else{
                cout<<"NO\n";
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

