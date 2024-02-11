#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
			for (int i = digits.size() - 1; i >= 0; i--)
			{
				if (digits[i] == 9) {
					digits[i] = 0;
					if (i == 0) {
						digits.insert(digits.begin(), 1);
					}
				}
				else {
					digits[i] += 1;
					break;
				}
			}
			return digits;
		}
};

int	main() {
	Solution sol;
	int myarray[] = {9};
	vector<int> digits(myarray, myarray + sizeof(myarray)/sizeof(int));
	sol.plusOne(digits);
	for (int i = 0; i < digits.size(); i++)
		cout << digits[i] << endl;
}