/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 
const int M = 998244353;

long long solve(vector<int>&a, int x){
        long long res = 0;
        long long ec,es,oc,os,n = a.size();
        ec=es=oc=os=0;
        for(int i = 0;i<n;i++){
                long long nec,nes,noc,nos;
                if(a[i]&(1<<x)){
                        nec = oc;
                        nes = oc + os;
                        noc = ec + 1;
                        nos = es + ec + 1;
                }
                else{
                        nec = ec + 1;
                        nes = es + ec + 1;
                        noc = oc;
                        nos = os + oc;
                }
                res += nos;
                res %= M;
                os = nos;
                oc = noc;
                es = nes;
                ec = nec;
        }
        return res;
}

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;
        cin>>n;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        long long res =0;
        for(int i = 0;i<32;i++){
                long long cres = solve(a,i);
                res += cres<<i;
                res %= M;
        }
        cout<<res<<'\n';
}
