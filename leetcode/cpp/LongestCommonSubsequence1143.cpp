#include <iostream>
#include <string>

using namespace std;

class Solution {
	private:

	public:
		int longestCommonSubsequence(string text1, string text2) {
		}
};

int	main()  {
	string str1 = "abcde", str2 = "ace", str3 = "abc", str4 = "abc", str5 = "abc", str6 = "def";

	Solution sol;

	cout << "length: " << sol.longestCommonSubsequence(str1, str2) << endl;
	cout << "length: " << sol.longestCommonSubsequence(str3, str4) << endl;
	cout << "length: " << sol.longestCommonSubsequence(str5, str6) << endl;
	return 0;
}