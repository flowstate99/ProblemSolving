#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		unordered_map<string, vector<string>> mp;

		for (auto x: strs) {
			string word = x;
			sort(word.begin(), word.end());
			mp[word].push_back(x);
		}

		vector<vector<string>> ans;
		for (auto x: mp)
			ans.push_back(x.second);
		return ans;
	}
};

int main() {
	vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
	Solution solution;
	vector<vector<string>> result = solution.groupAnagrams(input);
	for (const auto& group : result) {
		cout << "[";
		for (const auto& word : group) {
			cout << word << ", ";
		}
		cout << "]" << endl;
	}

	return 0;
}
