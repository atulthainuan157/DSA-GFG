class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int st=0, end=arr.size()-1;
        while(st<=end) {
            int mid=st+(end-st)/2;
            if(k>arr[mid])
                st=mid+1;
            else if(k<arr[mid])
                end=mid-1;
            else {
                while(arr[mid]==k) {
                    mid--;
                }
                return mid+1;
            }
        }
        return -1;
    }
};