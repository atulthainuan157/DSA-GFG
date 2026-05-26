class Solution {
  public:
    int minToggle(vector<int>& arr) {
        int oneCount = 0;
        int toggle = 0;
        
        for(int val : arr) {
            if(val == 1) {
                oneCount++;
            }
            else {
                toggle = min(toggle+1, oneCount);
            }
        }
        
        return toggle;
    }
};