
#include <algorithm>
#include <vector>
using namespace std;
vector<bool> visited;
vector<int> order;
vector<vector<int>> strongly_connected_components;

// Only called if i not visited
void dfs_first(int i,vector<vector<int>>& adj){
    for(int x:adj[i]){
        if(!visited[x]){
            visited[x] = true;
            dfs_first(x,adj);
        }
    }
    order.push_back(i);
}

vector<vector<int>> reverse(vector<vector<int>>& adj){
    vector res(adj.size(),vector<int>{});
    for(int i = 1;i<adj.size();i++){
        for(int x:adj[i]){ // i -> x
            res[x].push_back(i); // x -> i
        }
    }
    return res;
}

// Only call if i not visited
void dfs_second(int i, vector<vector<int>>& reverse_adj){
    strongly_connected_components.back().push_back(i);
    for(auto x: reverse_adj[i]){
        if(!visited[x]){
            visited[x] = true;
            dfs_second(x, reverse_adj);
        }
    }
}

[[nodiscard("Why did you call this if not for the return value")]]
vector<vector<int>> kosaraju(vector<vector<int>>& adj){
    // Search 1
    int n = adj.size();
    visited.assign(n,false);
    order.assign(0,0);
    for(int i = 1;i<n;i++){
        if(!visited[i]){
            visited[i] = true;
            dfs_first(i, adj);
        }
    }

    auto reverse_adj = reverse(adj);
    // Search 2
    strongly_connected_components.assign(0,vector<int>{});
    fill(visited.begin(), visited.end(), false);

    for(int i = order.size()-1;i>=0;i--){
        int x = order[i];
        if(!visited[x]){
            strongly_connected_components.emplace_back();
            visited[x] = true;
            dfs_second(x, reverse_adj);
        }
    }
    return strongly_connected_components;
}

int main(){
    vector adj{
        vector(0,0),
        vector{2,4},
        vector{1,5},
        vector{2,7},
        vector(0,0),
        vector{4},
        vector{5,3},
        vector{6}
    };
    auto const res = kosaraju(adj);
}
