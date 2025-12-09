class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_set<int>s;
        vector<int>ans;
        for(int i=0;i<arr.size();i++) {
            if(s.find(arr[i])!=s.end())
                ans.push_back(arr[i]);
            s.insert(arr[i]);
        }
        return ans;
    }
};