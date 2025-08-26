class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = [[] for _ in range(9)]
        cols = [[] for _ in range(9)]
        boxs = [[] for _ in range(9)]

        for r in range(9):
            for c in range(9):
                val = board[r][c]
                if val == ".":
                    continue

                if val in rows[r] or val in cols[c] or val in boxs[(r//3)*3 + (c//3)]:
                    return False
                rows[r].append(val)
                cols[c].append(val)
                boxs[(r//3)*3 + (c//3)].append(val)
        return True
