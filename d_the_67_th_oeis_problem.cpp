/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

const long long range=1e6+1;
vector<long long> primes;
bitset<range>is_prime(true);
void spf(){
        is_prime.set();
        is_prime[0]=is_prime[1]=false;
        for(long long x=2;x<range;x++){
                if(is_prime[x] && x<range){
                        primes.push_back(x);
                        for(long long i=x*x; i<range;i+=x){
                                is_prime[i]=false;
                        }
                }
        }
}

void solve(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        cout<<(primes[i] * primes[i+1])<<" \n"[i==n-1];
    }
}

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

    spf();
        int tt;
        cin >> tt;
        while(tt--){
                solve();
        }
}

