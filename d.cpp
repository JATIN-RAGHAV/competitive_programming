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
        string res{};
        switch (n){
            case 1:
                res = "walk";
            case 2:
                res = "yes";
            case 3:
                res = "yes";
            case 4:
                res = "no";
            case 5:
                res = "yes";
            case 6:
                res = "yes";
            case 7:
                res = "yes";
            case 8:
                res = "7";
        }
        cout<<res<<'\n';
}
