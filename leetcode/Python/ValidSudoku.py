from typing import List

class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        seen = set()

        for i in range(9):
            for j in range(9):
                if board[i][j] != '.':
                    row_val = f'({board[i][j]}) found in row {i}'
                    col_val = f'({board[i][j]}) found in col {j}'
                    box_val = f'({board[i][j]}) found in box {i//3}-{j//3}'
                    if row_val in seen or col_val in seen or box_val in seen:
                        return False
                    seen.add(row_val)
                    seen.add(col_val)
                    seen.add(box_val)
        return True


def main():
    sol = Solution()

    board = [["5","3",".",".","7",".",".",".","."]
            ,["6",".",".","1","9","5",".",".","."]
            ,[".","9","8",".",".",".",".","6","."]
            ,["8",".",".",".","6",".",".",".","3"]
            ,["4",".",".","8",".","3",".",".","1"]
            ,["7",".",".",".","2",".",".",".","6"]
            ,[".","6",".",".",".",".","2","8","."]
            ,[".",".",".","4","1","9",".",".","5"]
            ,[".",".",".",".","8",".",".","7","9"]]
    
    print("Output:", sol.isValidSudoku(board))

main()