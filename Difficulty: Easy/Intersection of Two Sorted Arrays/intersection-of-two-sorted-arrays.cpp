class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int>sa;
        unordered_set<int>sb;
        vector<int>ans;
        for(int i=0;i<a.size();i++) {
            sa.insert(a[i]);
        }
        for(int i=0;i<b.size();i++) {
            sb.insert(b[i]);
        }
        for(auto &i : sa) {
            if(sb.find(i)!=sb.end()) {
                ans.push_back(i);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};