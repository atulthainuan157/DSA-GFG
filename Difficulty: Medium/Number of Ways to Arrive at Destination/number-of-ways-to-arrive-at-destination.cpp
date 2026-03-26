class Solution {
  public:
    int countPaths(int V, vector<vector<int>>& edges) {
        // code here
        const int MOD = 1e9+7;
        
        vector<vector<pair<int, int>>>adj(V);
        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];
            int w = e[2];
            
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        
        vector<long long>dist(V, LLONG_MAX);
        
        vector<int>ways(V, 0);
        
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>>pq;
        dist[0] = 0;
        ways[0] = 1;
        pq.push({0,0});
        while(!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            long long d = top.first;
            int u = top.second;
            for(auto &it : adj[u]) {
                int v = it.first;
                int w = it.second;
                
                long long newDist = d+w;
                
                if(newDist<dist[v]) {
                    dist[v] = newDist;
                    ways[v] = ways[u];
                    pq.push({newDist, v});
                }
                else if(newDist == dist[v]) {
                    ways[v] = (ways[u]+ways[v])%MOD;
                }
            }
        }
        return ways[V-1];
    }
};