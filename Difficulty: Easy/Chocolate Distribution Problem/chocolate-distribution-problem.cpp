class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int minDiff=INT_MAX;
        int n = a.size();
        if(n==0 || m==0) {
            return 0;
        }
        sort(a.begin(), a.end());
        for(int i=0; i+m-1<n; i++) {
            int diff = a[i+m-1]-a[i];
            minDiff=min(diff, minDiff);
            }
        return minDiff;
    }
};