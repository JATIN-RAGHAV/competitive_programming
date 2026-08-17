/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int a,b,c;
        cin>>a>>b>>c;
        if(b>a)swap(a,b);
        if(c>a)swap(a,c);
        if(c>b)swap(b,c);
        if(a-c >= 10){
                cout<<"check again"<<'\n';
        }
        else{
                cout<<"final "<<b<<'\n';
        }
}
