class Solution {
  public:
    string removeSpaces(string& s) {
        string result;
        for(char val : s) {
            if(val != ' ') {
                result += val;
            }
        }
        return result;
    }
};