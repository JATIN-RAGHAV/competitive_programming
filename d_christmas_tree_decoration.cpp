/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <algorithm>
#include <bits/stdc++.h>
using namespace std; 
const int M  = 998244353;

long long fact(int x,int M){
        if(x<=1)return 1;
        long long res = 1;
        for(int i = 2;i<=x;i++){
                res*=i;
                res%=M;
        }
        return res;
}

vector<pair<long long, long long >>factorise(long long n){
	vector<pair<long long,long long>>res;
	for(long long i=2;i*i<=n;i++){
		if(!(n%i)){
			res.push_back(make_pair(i,0));
			while(!(n%i)){
				n/=i;
				res.back().second++;
			}
		}
	}
	if(n>1){
		res.push_back(make_pair(n,1));
	}
	return res;
}

long long pow(long long n, long long e, long long m){
	if(e==0)return 1;
	if(e==1)return n;
	long long half = pow(n, e/2, m);
	long long full = (half * half)%m;

	return (e&1? (full*n)%m : full);
}

long long inverse(long long x,long long m){
	long long g = gcd(x,m);
	if(g!=1)
		return 0;
	long long totient = 1;
	vector<pair<long long,long long>> factors = factorise(m);
	for(auto x:factors){
		totient *= pow(x.first,x.second-1,m)*(x.first-1);
	}
	return pow(x,totient-1,m);
};


void solve(){
        long long n,extra;
        cin>>n;
        vector<long long>a(n);
        cin>>extra;
        for(long long&x:a)cin>>x;
        long long mx = *max_element(a.begin(),a.end());
        long long sum = 0;
        for(long long x:a){
                if(x<mx){
                        sum+=mx-1-x;
                }
        }
        long long res = 0;
        if(sum<=extra){
                long long x = count(a.begin(),a.end(),mx);
                long long y = (extra - sum)%n;
                if(extra-sum>(n-x)){
                        extra -= sum;
                        extra %= n;
                        x = 0;
                        y = extra;
                }
                // cout<<x<<' '<<y<<' ';
                long long fxy = fact(x+y,M);
                long long num = fact(n-x,M);
                long long den = (fact(y,M) * fact(n-x-y,M))%M;
                long long den_inv = inverse(den,M)%M;
                long long com = (num*den_inv)%M;
                long long rem = fact(n-x-y,M);
                res = (com*fxy)%M;
                res = (res*rem)%M;
        }
        cout<<res<<'\n';
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

