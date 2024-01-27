#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int signFunc(int x) {
		if (x > 0)
			return 1;
		else if (x < 0)
			return -1;
		else
			return 0;
	}
	int arraySign(vector<int> &nums)
	{
		int product = 1;
		for (int i = 0; i < nums.size(); i++)
		{
			product *= nums[i];
		}
		return signFunc(product);
	}
};

int	main() {
	Solution sol;
	int myarray[] = {-1, -2, -3, -4, 3, 2, 1};
	vector<int> nums(myarray, myarray + sizeof(myarray) / sizeof(int));
	cout << sol.arraySign(nums);
}