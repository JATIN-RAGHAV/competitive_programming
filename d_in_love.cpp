/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int q,l,r;
        cin>>q;
        multiset<int>left,right;
        char c;
        while(q--){
                cin>>c>>l>>r;
                if(c=='+'){
                        left.insert(l);
                        right.insert(r);
                }
                else{
                        auto it = left.lower_bound(l);
                        left.erase(it);
                        it = right.lower_bound(r);
                        right.erase(it);
                }
                if(right.size() && (*(right.begin()) < *(--left.end()))){
                        cout<<"YES\n";
                }
                else{
                        cout<<"NO\n";
                }
        }
}
