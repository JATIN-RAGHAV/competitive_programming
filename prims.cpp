
#include <bits/stdc++.h>
using namespace std;
using edge = tuple<int,int,int>;

struct com{
        bool operator()(edge a,edge b)const;
};

bool com::operator()(edge a,edge b)const{
        return get<2>(a) < get<2>(b);
}

vector<edge> prim(vector<vector<pair<int,int>>>& adj){
        set<edge,com> que;
        vector<bool> visited(adj.size(),false);
        int left = adj.size()-1;
        visited[1] = true;
        for(auto [e,w]:adj[1]){
                que.insert({1,e,w});
        }
        left--;
        vector<edge>res;
        long long weight = 0;
        cout<<left<<endl;
        while(left>0){
                auto c = que.begin();
                auto [l,r,w] = *c;
                que.erase(c);
                if(!visited[l] || !visited[r]){
                        res.push_back({l,r,w});
                        weight += w;
                        if(visited[r])swap(r,l);
                        visited[l] = visited[r] = true;
                        for(auto [e,w]:adj[r]){
                                que.insert({r,e,w});
                        }
                        left--;
                }
        }
        return res;
}

int main(){
        vector<vector<pair<int,int>>> adj{
        {}, // 0
        {{2,3},{5,5}},//1
        {{1,3},{5,6},{3,5}},//2
        {{2,5},{6,3},{4,9}},//3
        {{3,9},{6,7}},//4
        {{1,5},{2,6},{6,2}},//5
        {{5,2},{3,3},{4,7}},//6
        };
        auto spanning = prim(adj);

        for(auto [l,r,w]:spanning){
                printf("%d <-> %d    -> %d\n",l,r,w);
        }
}
