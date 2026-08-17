/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c = 0;
    set<int> cnt;
    for(int i =0;i<n;i++){
        cnt.insert(c);
        if(s[c] == 'L'){
            c--;
        }
        else{
            c++;
        }
    }
    cout<<cnt.size()<<'\n';
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

