// User function template for C++
class Solution {
  public:
  
    bool isVovel(char val) {
        if(val == 'A' || val =='E' || val == 'I' || val == 'O' || val == 'U' || val =='a' || val == 'e' || val == 'i' || val == 'o' || val == 'u') {
            return true;
        }
        return false;
    }

    string removeVowels(string& s) {
        string result;
        for(char val : s) {
            if(!isVovel(val)) {
                result += val;
            }
        }
        return result;
    }
};