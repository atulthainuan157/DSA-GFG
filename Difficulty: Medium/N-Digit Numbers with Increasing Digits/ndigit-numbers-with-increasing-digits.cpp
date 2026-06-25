class Solution {
	public:
	
	vector<int>ans;
	
	void solve(int num, int lastDigit, int length, int n) {
		if (length == n) {
			ans.push_back(num);
			return;
		}
		for (int dig = lastDigit + 1; dig <= 9; dig++) {
			solve(num*10 + dig, dig, length + 1, n);
		}
		
	}
	
	vector<int> increasingNumbers(int n) {
		if (n == 1) {
			for (int i = 0; i <= 9; i++) {
				ans.push_back(i);
			}
			return ans;
		}
		
		if (n > 9) {
			return ans;
		}
		
		for (int dig = 1; dig <= 9; dig++) {
			solve(dig, dig, 1, n);
		}
		
		return ans;
	}
};
