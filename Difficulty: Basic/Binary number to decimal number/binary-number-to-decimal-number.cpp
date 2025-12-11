class Solution {
  public:
    int binaryToDecimal(string &b) {
        int ans=0;
        for(char c : b) {
            ans=ans*2+(c-'0');
        }
        return ans;
    }
};