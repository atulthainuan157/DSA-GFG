class Solution {
  public:
    bool canFormPalindrome(string &s) {
        unordered_map<int, int>freq;
        for(int i=0; i<s.size(); i++) {
            freq[s[i]]++;
        }
        int countodd = 0; 
        for(auto& val : freq) {
            if(val.second%2!=0) {
                countodd++;
            }
        }
        if(countodd>1) {
            return false;
        }
        return true;
    }
};