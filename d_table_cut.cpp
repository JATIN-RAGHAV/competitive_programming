/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

template <class T>
ostream& operator<<(ostream& os, vector<T>& v){
        if(v.size() == 0){
                os << "[]\n";
                return os;
        }
        os<<'[';
        for(int i = 0;i<v.size();i++){
                os<<v[i]<<",]"[i==v.size()-1];
        }
        return os;
}

void solve(){
        int n,m;
        cin>>n>>m;
        vector grid(n,vector<bool>(m,false));
        int c;
        int total = 0;
        for(int i =0;i<n;i++){
                for(int j =0;j<m;j++){
                        cin>>c;
                        grid[i][j] = c;
                        total += c;
                }
        }
        long long a,b;
        a = b = total/2;
        a+=(total&1);
        long long res = a*b;
        vector<int> rows(n); // rows[i] => [0,rows[i]) 1s from grid[i] are in 'a'
        int c_cnt = 0;
        int c_col = m;
        for(int i = n-1;i>=0;i--){
                for(int j = 0;j<c_col;j++){
                        if(grid[i][j]){
                                if(c_cnt+1>a){
                                        c_col = j;
                                        break;
                                }
                                c_cnt++;
                        }
                }
                rows[i]=c_col;
        }
        cout<<res<<'\n';
        string steps(rows[0],'R');
        steps.push_back('D');
        for(int i = 0;i<n-1;i++){
                steps.append(string(rows[i+1]-rows[i],'R'));
                steps.push_back('D');
        }
        steps.append(string(m-rows.back(),'R'));
        cout<<steps<<'\n';
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

