class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        for(int i=start; i<=end; i++) {
            if(find(arr.begin(), arr.end(), i)==arr.end()) {
                return false;
            }
        }
        return true;
    }
};
