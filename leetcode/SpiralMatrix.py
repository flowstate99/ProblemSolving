from typing import List

class	Solution:
	def	spiralOrder(self, matrix: List[List[int]]) -> List[int]:
		res = []
		for i in range(len(matrix)):
			if i == 0:
				res +=