#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

class Solution
{
private:
		bool isNumber(string line, int &n) {
				char* p;
				int i, size = line.size();
				for (i = 0; i < size; ++i) {
						if (i == 0 && line[i] == '-') {
								continue;
						} else if (line[i] < '0' || line[i] > '9') {
								return false;
						}
				}
				n = strtol(line.c_str(), &p, 10);
				return true;
		}
public:
    int calPoints(vector<string>& operations) {
        int size=operations.size(), n;
        vector<int> record;
        for (int i = 0; i < size; i++) {
            if (isNumber(operations[i], n))
                record.push_back(stoi(operations[i]));
            else if (operations[i] == "+")
                record.push_back(record[record.size() - 1] + record[record.size() -2]);
            else if (operations[i] == "D")
                record.push_back( 2*record[record.size() - 1]);
            else
                record.pop_back();
        }
				int res = accumulate(record.begin(), record.end(), 0);
				return res;
		}
};

int	main() {
	Solution sol;
	string arr[] = {"5","-2","4","C","D","9","+","+"};

	vector<string> operations(arr, arr + sizeof(arr) / sizeof(string));
	cout << sol.calPoints(operations);
	return 0;
}