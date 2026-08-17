#include <algorithm>
#include <ostream>
#include <vector>
#include <iostream>
#include <set>
using namespace std;
set<pair<int,int>> solve(vector<int>&finish,vector<int>&start);

ostream& operator<<(ostream& os, pair<int,int>&&p){
        return os<<'('<<p.first<<','<<p.second<<")\n";
}

int main(){
        vector<int>start{1,3,0,5,3,5,6,7,8,2,12};
        vector<int>finish{4,5,6,7,9,9,10,11,12,14,16};
        set<pair<int,int>> res = solve(finish,start);
        cout<<"Answer is:\n";
        for(auto s:res){
                cout<<(pair<int,int>(s.second,s.first));
        }
}

set<pair<int,int>> solve(vector<int>&finish,vector<int>&start){
        int n = finish.size();
        vector times(n,pair<int,int>());
        for(int i =0;i<n;i++){
                times[i].first = finish[i];
                times[i].second = start[i];
        }
        sort(times.begin(),times.end());
        int l = 0;
        set<pair<int,int>> res;
        for(int i =0;i<n;i++){
                if(times[i].second >= l){
                        res.insert(times[i]);
                        l = times[i].first;
                }
        }
        return res;
}
