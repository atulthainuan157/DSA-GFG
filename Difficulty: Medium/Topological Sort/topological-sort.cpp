class Solution {
  public:
    void DFS(int curr, vector<bool>& vis, stack<int>& s, vector<vector<int>>& adj) {
        
        vis[curr]=true;
        for(int v : adj[curr]) {
            if(!vis[v]) {
                DFS(v, vis, s, adj);
            }
        }
        s.push(curr);
    }
    
    vector<int> topoSort(int V, vector<vector<int>>& edges) {

        vector<vector<int>>adj(V);
        for(auto &e : edges) {
            adj[e[0]].push_back(e[1]);
        }


        vector<bool>vis(V, false);
        stack<int>s;
        
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                DFS(i, vis, s, adj);
            }
        }
        
        vector<int>ans;
        
        while(!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};