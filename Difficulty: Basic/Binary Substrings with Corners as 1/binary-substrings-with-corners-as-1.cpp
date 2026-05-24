class Solution {
  public:
    int binarySubstring(string& s) {
        int n = s.size();
        int m = 0;
        for(char ch : s) {
            if(ch=='1') {
                m++;
            }
        }
        return m*(m-1)/2;
    }
};