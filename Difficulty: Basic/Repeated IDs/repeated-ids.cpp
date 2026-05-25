class Solution {
  public:
    vector<int> uniqueId(vector<int>& arr) {
        vector<int>ans;
        for(int val : arr) {
            if(find(ans.begin(), ans.end(), val)==ans.end()) {
                ans.push_back(val);
            }
        }
        return ans;
    }
};