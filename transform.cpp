#include <bits/stdc++.h>
using namespace std;
template<typename T>
ostream& operator<<(ostream& os,vector<T> a){
        if(!a.size()){
                os<<"[]";
        }
        else{
                os<<'['<<a[0];
                for(int i = 1;i<a.size();i++){
                        os<<','<<a[i];
                }
                os<<"]\n";
        }
        return os;
}

int main(){
        vector<int> v(20);
        iota(v.begin(),v.end(),1);
        cout<<v;
        transform(v.begin(),v.end(),v.begin(),[](int a){
                return a*2;
        });
        cout<<v;
}
