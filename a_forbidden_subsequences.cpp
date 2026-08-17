/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    bool p = true;
    int i1=0;
    for(int i =0;i<s2.size();i++){
        while(i1<s1.size() && s1[i1] != s2[i]){
            i1++;
        }
        if(i1==s1.size()){
            p = false;
            break;
        }
    }
    int res = 0;
    if(p){

    }
    cout<<res<<'\n';
}
