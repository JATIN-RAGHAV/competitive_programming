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
    int mn = 0, mx = 0;
    bool in = false;
    int z = 0;
    for(int l =0,r=0;l<n;l=r){
        while(r<n && (in && (s[r] == '0' && z == 0) || s[r] == '1')){
            r++;
            if(s[r-1] == '0'){z++;}
            else {z=0;}
            in = true;
        }
        int ln = r-l;
        if(in){
            if(s[r-1] == '0'){
                ln--;
            }
            mx += ln;
            mn += (ln/2)+1;
        }
        z = 0;
        in = false;
        r++;
    }
    cout<<mn<<' '<<mx<<endl;
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

