/**
*	author: walrus137
* 	message: Yoo!!!
**/
#include <bits/stdc++.h>
using namespace std; 

vector<bool> diagS,diagD,col;
vector<vector<bool>> res;
int ans{};

void back(int r){
    bool diagSO,diagDO;
    for(int i =0;i<8;i++){
        if(!col[i] && !diagS[r+i] && !diagD[r-i+7] && !res[r][i]){
            if(r == 7){
                ans++;
            }else{
                col[i] = true;
                diagSO = diagS[r+i];
                diagS[r+i] = true;
                diagDO = diagD[r-i+7];
                diagD[r-i+7] = true;

                back(r+1);

                col[i] = false;
                diagS[r+i] = diagSO;
                diagD[r-i+7] = diagDO;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 8;
    res.assign(8,vector<bool>(8,false));
    diagS.assign(15,false);
    diagD.assign(15, false);
    col.assign(8,false);
    vector<string> s{};
    string c{};
    for(int i =0;i<n;i++){
        cin>>c;
        s.push_back(c);
    }

    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            res[i][j] = s[i][j] == '*';
        }
    }

    back(0);
    cout<<ans<<'\n';
}
