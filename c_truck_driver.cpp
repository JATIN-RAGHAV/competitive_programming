/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void solve(){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        long long res = 0;
        // [l,r]
        int l =0,r=0;
        if(b==1){
                while(res[l] == 'b' && l+1<n){
                        l++;
                }
                l=r;
                if(res[l] == 'b'){
                        cout<<0<<'\n';
                        return;
                }
        }
        int b_c = s[l] == 'b';
        while(l<n){
                while(r+1<n){
                        if(s[r+1] == 'b' ){
                                if(b_c+1<b){
                                        b_c++;
                                        r++;
                                }
                                else{
                                        break;
                                }
                        }
                        r++;
                }
                // [l,r] b_c<b
                while(s[l] == 'a' && l<r){
                        int a_c = r-l+1 - b_c;
                        if(a_c>=a){
                                res++;
                        }
                        l++;
                }
                if(s[l] == 'b'){
                        b_c--;
                        int a_c = r-l+1 - b_c;
                        if(a_c>=a){
                                res++;
                        }
                        l++;
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

