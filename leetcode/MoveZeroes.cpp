#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
			int zeros = 0;
			for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
			{
				cout << *it << endl;
				if (*it == 0)
				{
					nums.erase(it);
					free(*it);
					zeros++;
				}
			}
			while (zeros > 0) {
				nums.push_back(0);
			}
		}
};

int	main() {
	Solution sol;

	int numsArray[] = {0, 1, 0, 3, 12};
	vector<int> nums(numsArray, numsArray + sizeof(numsArray)/sizeof(int));
	sol.moveZeroes(nums);
}