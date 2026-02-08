class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int ans=0;
        if(n<=1) {
            return 0;
        }
        for(int i=0; i<n-1; i++) {
            if(arr[i]>arr[i+1]) {
                ans = i+1;
                break;
            }
        }
        return ans;
    }
};
