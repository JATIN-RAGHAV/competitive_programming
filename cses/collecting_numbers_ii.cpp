/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;

    vector a(n+2,0),b(n,0);
    a[n+1]=n+1;
    int c;
    for(int i =0;i<n;i++){
        cin>>c;
        a[c] = i;
        b[i] = c;
    }

    int res{1};
    for(int i=2;i<=n;i++){
        if(a[i] < a[i-1])res++;
    }

    int l,r,nl,nr;
    for(int i =0;i<k;i++){
        cin>>l>>r;
        l--;r--;
        nl = b[l];
        nr = b[r];

        if(nr < nl){
            swap(nr,nl);
            swap(l,r);
        }

        if(a[nl] < a[nl-1])res--;
        if(a[nr] > a[nr+1])res--;
        if(nr - nl == 1){
            if(a[nr] < a[nl])res--;
        }else{
            if(a[nl] > a[nl+1])res--;
            if(a[nr] < a[nr-1])res--;
        }

        a[nl] = r;
        a[nr] = l;
        b[l] = nr;
        b[r] = nl;

        if(a[nl] < a[nl-1])res++;
        if(a[nr] > a[nr+1])res++;
        if(nr - nl == 1){
            if(a[nr] < a[nl])res++;
        }else{
            if(a[nl] > a[nl+1])res++;
            if(a[nr] < a[nr-1])res++;
        }
        
        cout<<res<<'\n';
    }
}
