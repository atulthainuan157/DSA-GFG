class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int large=INT_MIN, secondLarge=INT_MIN;
        
        for(int i=0;i<arr.size();i++)
            large=max(large, arr[i]);
            
        for(int i=0;i<arr.size();i++) {
            if(arr[i]!=large)
                secondLarge=max(secondLarge,arr[i]);
        }
        if(secondLarge==INT_MIN)
            return -1;
            
        return secondLarge;
    }
};