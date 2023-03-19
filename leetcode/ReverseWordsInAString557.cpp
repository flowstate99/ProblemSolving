#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution {
	public:
		string reverseWords(string s) {
			stringstream    ss(s);
			string  res = "";
			string  word;
			while (getline(ss, word, ' ')) {
				reverse(word.begin(), word.end());
				res += word;
				res += " ";
			}
			res.erase(res.size() - 1, 1);
			return res;
		}
};

int	main() {
	Solution	sol;
	string	s = "Let's take LeetCode contest";
	cout << sol.reverseWords(s) << endl;
}