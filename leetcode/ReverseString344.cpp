#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
	public:
		void reverseString(vector<char>& s) {
			reverse(s.begin(), s.end());
		}
};

int	main() {
	Solution	sol;
	vector<char>	s = {'h','e','l','l','o'};
	sol.reverseString(s);
	for (vector<char>::iterator it = s.begin(); it != s.end(); ++it) {
		cout << *it;
	}
	cout << endl;
}