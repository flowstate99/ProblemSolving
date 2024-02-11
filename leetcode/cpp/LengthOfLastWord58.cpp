#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
	public:
		int	lengthOfLastWord(string s) {
			int k = 0, length = 0;
			for (int i = s.size() - 1; i >= 0; i--)
			{
				if (s[i] == ' ' && k == 1)
					break;
				else if (s[i] != ' ') {
					k = 1;
					length++;
				}
			}
			return length;
		}
};

