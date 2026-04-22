class Solution {
  public:
    vector<int> findMean(vector<int> &arr, vector<vector<int>> &queries) {
        int n = arr.size();
        
        // Step 1: Prefix sum array
        vector<long long> prefix(n);
        prefix[0] = arr[0];
        
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + arr[i];
        }
        
        vector<int> ans;
        
        // Step 2: Answer queries
        for(int i = 0; i < queries.size(); i++) {
            int l = queries[i][0];
            int r = queries[i][1];
            
            long long sum;
            if(l == 0) sum = prefix[r];
            else sum = prefix[r] - prefix[l-1];
            
            ans.push_back(sum / (r - l + 1)); // floor automatically
        }
        
        return ans;
    }
};