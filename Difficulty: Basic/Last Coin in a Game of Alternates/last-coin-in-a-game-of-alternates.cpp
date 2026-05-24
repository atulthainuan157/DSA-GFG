class Solution {
  public:
    int coin(vector<int>& arr) {
        int st = 0, end = arr.size()-1;
        while(st <= end) {
            if(st == end) {
                return arr[st];
            }
            else {
                if(arr[st] < arr[end]) {
                    end--;
                }
                else {
                    st++;
                }
            }
        }
        return -1;
    }
};