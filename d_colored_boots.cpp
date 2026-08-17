/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;
        cin>>n;
        int left[26]{0},right[26]{0};
        int lq = 0,rq=0;
        string l,r;
        cin>>l>>r;
        for(char c:l){
                if(c == '?')lq++;
                else{
                        left[c-'a']++;
                }
        }
        for(char c:r){
                if(c == '?')rq++;
                else{
                        right[c-'a']++;
                }
        }
        int res =0;
        for(int i =0;i<26;i++){
                res += min(left[i],right[i]);
        }
        res += min(lq+rq,n-res);
        cout<<res<<'\n';
}
