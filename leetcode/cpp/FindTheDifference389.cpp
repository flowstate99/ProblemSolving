#include <iostream>
#include <string>

using namespace std;

class Solution {
	public:
		char findTheDifference(string s, string t) {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());

            for (int i = 0; i < s.size(); i++) {
                if (s[i] != t[i])
                    return (char)t[i]; // if after sorting there is an imposter among us before the string s ends then its returned
            }
						return (char)t[t.size() - 1]; // if we couldnt catch the imposter in same range then if it exists then it should be the last one.
		}
};


int	main() {
	Solution sol;
	string s = "a";
	string t = "aa";

	cout << sol.findTheDifference(s, t) << "\n";
}