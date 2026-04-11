class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        int n = arr.size();
        long long ans = 0;
        long long len = 1;
        for(int i=1; i<n; i++) {
            if(arr[i]>arr[i-1]) {
                len++;
            }
            else {
                ans += (len*(len-1))/2;
                len = 1;
            }
        }
        ans += (len*(len-1))/2;
        return ans;
    }
};
