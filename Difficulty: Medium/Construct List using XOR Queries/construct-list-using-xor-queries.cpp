class Solution {
  public:
    vector<int> constructList(vector<vector<int>> &queries) {
        vector<int>result;
        int xr = 0;
        
        result.push_back(0);
        
        for(int i=0; i<queries.size(); i++) {
            if(queries[i][0]==0) {
                result.push_back(queries[i][1]^xr);
            }
            else {
                xr ^= queries[i][1];
            }
        }
        
        for(int &x : result) {
            x ^= xr;
        }
        
        sort(result.begin(), result.end());
        
        return result;
    }
};
