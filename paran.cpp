#include<bits/stdc++.h>

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

vector<string>res{};
void generate_p(int open,int close,string s){
        if(!open & !close){
                res.push_back(s);
                return;
        }
        if(open){
                generate_p(open-1,close,s+'(');
        }
        if(close>open){
                generate_p(open,close-1,s+')');
        }
}
vector<string> generateParenthesis(int n) {
        res.clear();
        generate_p(n,n,"");
        return res;
}
int main(){
        for(int i = 1;i<9;i++){
                vector<string> ans = generateParenthesis(i);
                cout<<i<<'\n';
                cout<<ans;
                cout<<'\n';
                cout<<flush;
        }
}
