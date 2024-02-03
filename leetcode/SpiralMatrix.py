from typing import List

class	Solution:
	# wow what a solution
	def	spiralOrder(self, matrix: List[List[int]]) -> List[int]:
		res = []
		while matrix:
			res += matrix.pop(0)
			matrix = (list(zip(*matrix)))[::-1]
		return res

def	main():
	sol = Solution()
	matrix = [[1,2,3],[4,5,6],[7,8,9]]
	print(sol.spiralOrder(matrix))

if __name__ == "__main__":
	main()