class Solution {
  public:
    bool isBinaryPalindrome(int n) {
        int num = n;
        string binary = "";
        while(num != 0) {
            binary = (char)(num%2 + '0') + binary;
            num /= 2;
        }
        int st = 0, end = binary.size()-1;
        while(st <= end) {
            if(binary[st] != binary[end]) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};