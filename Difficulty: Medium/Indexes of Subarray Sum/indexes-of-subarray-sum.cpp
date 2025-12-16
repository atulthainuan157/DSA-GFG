class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int>ans;
        int st=0;
        int sum=0;
        int n=arr.size();
        for(int end=0;end<n;end++) {
            sum+=arr[end];
            while(sum>target && st<=end) {
                sum-=arr[st];
                st++;
            }
            if(sum==target) {
                return {st+1, end+1};
            }
        }
        return {-1};
    }
};