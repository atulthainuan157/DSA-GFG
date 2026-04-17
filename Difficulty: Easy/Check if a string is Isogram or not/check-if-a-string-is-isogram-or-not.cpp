class Solution {
  public:
    bool isIsogram(string& s) {
        unordered_map<char, int>mp;
        for(char val : s) {
            mp[val]++;
        }
        for(auto& val : mp) {
            if(val.second>1) {
                return false;
            }
        }
        return true;
    }
};