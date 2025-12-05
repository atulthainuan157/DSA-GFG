class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long sum=0, n=(long long)arr.size()+1;
        for(int val : arr)
            sum+=val;
        return n*(n+1)/2-sum;
    }
};