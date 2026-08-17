
#include <bits/stdc++.h>
using namespace std;

class algorithms{
public:
        static vector<int> topological_sort(vector<vector<int>>& adj);
        static bool is_cyclic_graph(vector<vector<int>>& adj);
        static bool dfs_cycle_checker(int current,vector<vector<int>>& adj,vector<int>& states);
        static int count_paths(int start, int end,vector<vector<int>>& adj);
        static int dfs_count_paths(int current,int end, vector<vector<int>>& adj, vector<int>& counts);
        static vector<int> successor_graph_cycle(vector<int>& adj,int node);
};

vector<int> algorithms::successor_graph_cycle(vector<int>& adj,int node){
        // finding out which node is a part of the cycles;
        int a=node,b=adj[node];
        while(a!=b){
                a = adj[a];
                
        }
        node = a;
        // travel along that node
        int cnode = adj[node];
        vector<int> res{node};
        while(cnode != node){
                res.push_back(cnode);
                cnode = adj[cnode];
        }
        return res;
}

int algorithms::count_paths(int start, int end,vector<vector<int>>& adj){
        vector<int> counts(adj.size(),-1); // count[i] -> ways to get to end from i node
        int res = dfs_count_paths(start,end, adj, counts);
        return res;
}

int algorithms::dfs_count_paths(int current, int end, vector<vector<int>> &adj, vector<int> &counts){
        if(current == end){
                counts[end] = 1;
                return 1;
        }
        int res = 0;
        for(int x:adj[current]){
                if(counts[x] == -1){
                        res += dfs_count_paths(x,end,adj,counts);
                }
                else{
                        res += counts[x];
                }
        }
        counts[current] = res;
        return res;
}

vector<int> algorithms::topological_sort(vector<vector<int>>& adj){
        vector<bool> in(adj.size(),false); // in[i] == false, means no other node points to this one
        in[0] = true;
        for(auto v:adj){
                for(auto x:v){
                        in[x] = true;
                }
        }
        int start = find_if(in.begin(),in.end(),[](bool x){return !x;}) - in.begin();
        vector<int> res;
        res.push_back(start);
        queue<int> q;
        q.push(start);
        vector<bool>visited(adj.size(),false);
        visited[start] = true;
        while(!q.empty()){
                int c = q.front();q.pop();
                for(int x:adj[c]){
                        if(!visited[x]){
                                visited[x] = true;
                                res.push_back(x);
                                q.push(x);
                        }
                }
        }
        return res;
}


bool algorithms::is_cyclic_graph(vector<vector<int>> &adj){
        vector<int> states(adj.size(),0);
        for(int i = 1;i<adj.size();i++){
                if(!states[i]){
                        if(dfs_cycle_checker(i, adj, states))return true;
                }
        }
        return false;
}

bool algorithms::dfs_cycle_checker(int i,vector<vector<int>>& adj,vector<int>& states){
        for(int x:adj[i]){
                if(states[x] == 1){
                        return true;
                }
                if(states[x] == 0){
                        states[x] = 1;
                        if(dfs_cycle_checker(x,adj,states))return true;
                        states[x] = 2;
                }
        }
        return false;
}

template <class T>
ostream& operator<<(ostream& os, vector<T>& v){
        if(v.size() == 0){
                os << "[]\n";
                return os;
        }
        os<<'[';
        for(int i = 0;i<v.size();i++){
                os<<v[i]<<",]"[i==v.size()-1];
        }
        os<<'\n';
        return os;
}

int main(){
        vector adj{0,2,3,4,5,6,2};
        auto res = algorithms::successor_graph_cycle(adj, 3);
        cout<<res;
}
