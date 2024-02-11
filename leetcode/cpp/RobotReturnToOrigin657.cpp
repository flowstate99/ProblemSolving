#include <iostream>
#include <string>

using namespace std;

class Solution {
	public:
		bool	judgeCircle(string moves) {
			int startingX = 0, startingY = 0;
			for (int i = 0; i < moves.size(); i++) {
				if (moves[i] == 'R')
					startingX += 1;
				else if (moves[i] =='L')
					startingX -= 1;
				else if (moves[i] == 'U')
					startingY += 1;
				else if (moves[i] == 'D')
					startingY -= 1;
			}
			if (!startingX && !startingY)
				return true;
			return false;
		}
};