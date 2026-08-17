/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

int cnt[10];
bool isStrOk(string s,int x2){
        int ccnt[10]{};
        int x1S = 0;
        for(char c:s){
                ccnt[c-'0']++;
        }
        for(int i = 0;i<10;i++){
                if(ccnt[i] > cnt[i]){
                        return false;
                }
                x1S += i * (cnt[i]-ccnt[i]);
        }
        if(x1S == x2 || x1S == 0)return true;
        return false;
}

int sum(int i){
        int res = 0;
        while(i > 0){
                res += i%10;
                i /= 10;
        }
        return res;
}

int sum(string& s){
        int res = 0;
        for_each(s.begin(),s.end(),[&res](char c){res += c-'0';});
        return res;
}

string gen(int i){
        string res;
        while(i > 9){
                res += to_string(i);
                i = sum(i);
        }
        res += to_string(i);
        return res;
}

void solve(){
        string s;
        cin >> s;
        for(int i =0;i<10;i++)cnt[i]=0;
        for(char c:s){
                cnt[c-'0']++;
        }
        string ans{};
        for(int i = 0; i<1e6 ; i++){
                string cS = gen(i);
                if(isStrOk(cS,i)){
                        int ccnt[10]{};
                        for(char c:cS){
                                ccnt[c-'0']++;
                        }
                        for(int j = 9; j>=0;j--){
                                ans += string(cnt[j]-ccnt[j],j+'0');
                        }
                        ans += cS;
                        break;
                }
        }
        cout<<ans<<'\n';
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

