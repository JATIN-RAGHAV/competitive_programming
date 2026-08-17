/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

bool is_ok(vector<int>&a){
        int n = a.size();
        for(int i = 0;i<n-1;i++){
                bool found = false;
                for(int j = i+1;j<n;j++){
                        if(a[i] == ((i+1)^a[j])){
                                found = true;
                                break;
                        }
                }
                if(!found)return false;
        }
        return true;
}
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

void solve(int n){
        vector<int>a(n);
        iota(a.begin(),a.end(),1);
        bool found = false;
        cout<<n<<'\n';
        int cnt = 1;
        do {
                if(is_ok(a)){
                        cout<<cnt++<<':'<<a;
                        found = true;
                }

        }while (next_permutation(a.begin(),a.end()));
        if(!found){
                cout<<"No solution found"<<'\n';
        }
        [1,1,2,3,3,3,3,4,4,4,7,7,7,7];
        for(int l=0,r=0;r<=n;l=r){
                while(r<n && a[l] == a[r]){
                        r++;
                }
                int sz = r-l;
                int e = a[l];
        }
        for(int i = 0;i<n;i++){
                cout<<a[i] <<" \n"[i==n-1];
        }
        cout<<endl;
}

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        solve(10);
}

