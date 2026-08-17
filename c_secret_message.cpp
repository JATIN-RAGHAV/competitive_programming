/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int range = 50'010;
vector<vector<int>> facts;
void fill_facts(){
    facts.assign(range,vector<int>{1});
    for(int i = 2;i<range;i++){
        int j = 1;
        while(j*i<range){
            facts[i*j].push_back(i);
            j++;
        }
    }
}

bool isOk(int m,vector<vector<bool>>& cols){
    int n = cols.size();
    int t = n/m;
    vector res(cols.begin(),cols.begin()+m);
    for(int j =0;j<m;j++){// ith position
        for(int i = 0;i<t;i++){ // i*j th section
            for(int k=0;k<26;k++){// kth character
                res[j][k] = res[j][k] && cols[j+(i*m)][k];
            }
        }
    }
    bool ans = true;
    for(auto&chars:res){
        if(find(chars.begin(),chars.end(),true) == chars.end()){
            ans = false;
            break;
        }
    }
    return ans;
}
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
    int n,k;
    cin>>n>>k;
    vector cols(n,vector<bool>(26,false));
    string s;
    char c;
    for(int i = 0;i<k;i++){
        cin>>s;
        for(int j=0;j<n;j++){
            int c = s[j]-'a';
            cols[j][c] = true;
        }
    }
    int mn=n;
    // for(auto chars:cols){
    //     cout<<chars;
    // }
    for(int i:facts[n]){
        if(isOk(i,cols)){
            mn = i;
            break;
        }
    }
    string ans{};
    {
        int n = cols.size();
        int t = n/mn;
        vector res(cols.begin(),cols.begin()+mn);
        for(int j =0;j<mn;j++){
            for(int i = 0;i<t;i++){
                for(int k=0;k<26;k++){
                    res[j][k] = res[j][k] &&cols[j+(i*mn)][k];
                }
            }
        }
        for(auto chars:res){
            auto it = find(chars.begin(),chars.end(),true);
            int ind = it-chars.begin();
            ans.push_back(ind+'a');
        }
    }
    string final{};
    for(int i =0;i<(n/mn);i++){
        final.append(ans);
    }
    cout<<final<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fill_facts();
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}

