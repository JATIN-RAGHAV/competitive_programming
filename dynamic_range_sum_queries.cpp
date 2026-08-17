/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

void update(vector<long long>& Tree,int i){
        int half = Tree.size()>>1;
        i+=half;
        i/=2;
        while(i){
                Tree[i] = Tree[i*2] + Tree[(i*2) + 1];
                i/=2;
        }
}

long long sum(vector<long long>& Tree, int l,int r){
        long long res = 0;
        int half = Tree.size()>>1;
        l+=half;
        r+=half;
        while(r>=l){
                if(l&1)res += Tree[l];
                if(!(r&1))res += Tree[r];
                l = (l+1)>>1;
                r = (r-1)>>1;
        }
        return res;
}

int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int&x:a)cin>>x;
        int k = 0;
        while((1<<k)<n)k++;
        int sz = 1<<(k+1);
        vector<long long> Tree(sz);
        for(int i = 0;i<n;i++){
                Tree[i+(1<<k)] = a[i];
        }
        for(int i = n-1;i;i--){
                Tree[i] = Tree[i*2] + Tree[(i*2) + 1];
        }
        while(q--){
                int t;
                cin>>t;
                if(t==1){
                        int k,u;
                        cin>>k>>u;
                        Tree[k-1+(Tree.size()>>1)] = u;
                        update(Tree,k-1);
                }
                else{
                        int l,r;
                        cin>>l>>r;
                        l--;r--;
                        cout<<sum(Tree,l,r)<<'\n';
                }
        }
}
