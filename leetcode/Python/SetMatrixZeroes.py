from typing import List

class Solution:
	def setZeroes(self, matrix: List[List[int]]) -> None:
		rows, cols = len(matrix), len(matrix[0])
		row_check = [False] * rows
		col_check = [False] * cols
		for row in range(rows):
			for col in range(cols):
				if matrix[row][col] == 0:
					row_check[row] = True
					col_check[col] = True
		for row in range(rows):
			for col in range(cols):
				if row_check[row] or col_check[col]:
					matrix[row][col] = 0

def	main():
	sol = Solution()
	matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
	sol.setZeroes(matrix)
	print(matrix)

main()