#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
			string init = s;
			s += s;
			int n = s.size(), t = init.size();
			s[0] = ' ';
			s[n - 1] = ' ';
			if (s.find(init) != string::npos)
				return true;
			return false;
		}
};

int	main() {
	Solution sol;
	string s = "abcabcabcabc";

	cout << sol.repeatedSubstringPattern(s);

}