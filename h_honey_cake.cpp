/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        long long a,b,c,n;
        cin>>a>>b>>c>>n;
        long long ga,gb,gc;
        ga = gcd(n,a);
        gb = gcd(n,b);
        gc = gcd(n,c);
        int f,s,t;
        long long rem = n/ga;
        f = ga-1;
        s = gcd(rem,gb)-1;
        rem /= s+1;
        t = gcd(rem,gc)-1;
        rem /= t+1;
        if(rem > 1){
                cout<<"-1\n";
        }
        else{
                cout<<f<<' '<<s<<' '<<t<<'\n';
        }
}
