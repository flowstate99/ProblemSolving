#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
	private:
		string	checkWinner(vector<vector<string>> v, vector<vector<int>> moves) {
			if (
				(v[0][0] == "0" && v[0][1] =="0" && v[0][2] =="0")
				|| (v[1][0] == "0" && v[1][1] == "0" && v[1][2] == "0")
				|| (v[2][0] == "0" && v[2][1] == "0" && v[2][2] == "0"))
				return "A";
			if (
				(v[0][0] == "1" && v[0][1] =="1" && v[0][2] =="1")
				|| (v[1][0] == "1" && v[1][1] == "1" && v[1][2] == "1")
				|| (v[2][0] == "1" && v[2][1] == "1" && v[2][2] == "1"))
				return "A";

		}

	public:
		string	tictactoe(vector<vector<int>>& moves) {

			return nullptr;
		}
};