#include <iostream>
#include <string>
using namespace std;
class Solution
{
	public:
			string mergeAlternately(string word1, string word2) {
				string res = "";
				for (int i = 0; i < word1.size() || i < word2.size(); i++) {
					if (i < word1.size())
						res += word1[i];
					if (i < word2.size())
						res += word2[i];
				}
				return res;
			}
};