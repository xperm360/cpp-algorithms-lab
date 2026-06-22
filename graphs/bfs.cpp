#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>>& adj, int start) {
    vector<int> vis(adj.size());
    vector<int> ans;

    queue<int> q;
    q.push(start);
    vis[start] = 1;

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        ans.push_back(u);

        for(int v : adj[u]) {
            if(!vis[v]) {
                vis[v] = 1;
                q.push(v);
            }
        }
    }

    return ans;
}
