// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.

class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        int i=0, n =arr.size();
        while(i<n) {
            if(arr[i]==x)
                return i;
            int jump=max(1,abs(arr[i]-x))/k;
            if(jump<1)
                jump=1;
            i+=jump;
        }
        return -1;
    }
};