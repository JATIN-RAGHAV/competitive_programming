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
        long long n,m;
        cin>>n>>m;
        long long mx = (n*(n+1))/2ll;
        if((m<n) || (m>mx)){
                cout<<"-1\n";
                return;
        }
        vector<int>nums;
        long long rem = n;
        for(int i = n;i>0;i--){
                if((m - i) >= (rem-1)){
                        m-=i;
                        nums.push_back(i);
                        rem--;
                }
                if(m && (m == rem)){
                        break;
                }
        }
        vector<bool>used(n+1);
        cout<<nums[0]<<'\n';
        for(int i = 1;i<nums.size();i++){
                if(nums[i] == 1){
                        cout<<nums[i-1] <<" 1\n";
                        used[nums[i-1]]=true;
                        used[1] = true;
                        break;
                }
                else{
                        cout<<nums[i-1] <<' ' <<nums[i]<<'\n';
                        used[nums[i-1]]=used[nums[i]]= true;
                }
        }
        for(int i = 1;i<=n;i++){
                if(!used[i]){
                        cout<<i<< " 1\n";
                }
        }
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

