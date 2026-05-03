class Solution {
  public:
    vector<int> sortBySetBitCount(vector<int>& arr) {
        auto cmp = [](int a, int b) {
            int cntA = __builtin_popcount(a);
            int cntB = __builtin_popcount(b);
            return cntA > cntB;
        };
        
        stable_sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};