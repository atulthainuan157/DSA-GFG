class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        int st=0, end=arr.size()-1;
        while(st<=end) {
            int mid=st+(end-st)/2;
            if(arr[mid]==k)
                return true;
            else if(arr[mid]<k)
                st=mid+1;
            else
                end =mid-1;
        }
        return false;
    }
};