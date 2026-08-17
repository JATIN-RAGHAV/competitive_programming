
#include <bits/stdc++.h>
using namespace std;
int main(){
        {
                long long num = 1073741824ll;
                for(int i = 0;i<40;i++){
                        if(num&(1ll<<i)){
                                cout<<'1';
                        }
                        else{
                                cout<<'0';
                        }
                }
                cout<<'\n';
        }
        {
                long long num = 1073741822ll;
                for(int i = 0;i<40;i++){
                        if(num&(1ll<<i)){
                                cout<<'1';
                        }
                        else{
                                cout<<'0';
                        }
                }
                cout<<'\n';
        }
}
