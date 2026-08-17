/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
using tp = tuple<int,int,int>;
// first -> count of 2s
// second -> start index
// third -> end index inclusive 
vector<int>a, pref2,prefneg;

tp find_best(int i,int j){
        // [i,j)
        int c_2 = pref2[j] - pref2[i];
        int c_n = prefneg[j] - prefneg[i];
        // [i .l... ..r...  j]        
        if(c_n&1){
                int l = i;
                while(l<j && a[l] >0)l++;
                int r = j-1;
                while(r>=i && a[r] > 0)r--;
                if((pref2[j] - pref2[l+1]) > (pref2[r] - pref2[i])){
                        c_2 = pref2[j] - pref2[l+1];
                        i = l+1;
                }
                else{
                        c_2 = pref2[r] - pref2[i];
                        j = r;
                }
        }
        return {c_2, i, j-1};
}

void solve(){
        int n;
        cin>>n;
        a.assign(n,0);
        pref2.assign(n+1,0);
        prefneg.assign(n+1,0);
        vector<int>zeros(1,-1);
        for(int&x:a)cin>>x;
        bool others = false;
        for(int i = 0;i<n;i++){
                pref2[i+1] = pref2[i] + (abs(a[i]) == 2);
                prefneg[i+1] = prefneg[i] + (a[i] < 0);
                if(!a[i]){
                        zeros.push_back(i);
                }
                else{
                        others=true;
                }
        }
        if(!others){
                cout<<n<<' '<<"0\n";
                return;
        }
        zeros.push_back(n);
        int best = -1;
        int left = 0;
        int right = 0;
        for(int i = 0;i<zeros.size()-1;i++){
                auto [c_2, x,y] = find_best(zeros[i]+1, zeros[i+1]);
                if(c_2>=best){
                        best = c_2;
                        left = x;
                        right = n-1-y;
                }
        }
        cout<<left<<' '<<right<<'\n';
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

