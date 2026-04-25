class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        long long total = 0;
        for(int val : arr) {
            total += val;
        }
        long long prefix = 0;
        for(int val : arr) {
            prefix += val;
            if(prefix == total - prefix) {
                return true;
            }
        }
        return false;
    }
};
