class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<char>> rows(9), cols(9), boxes(9);

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                char ch = board[r][c];
                if (ch == '.') continue;

                int b = (r/3)*3 + (c/3); // 0..8

                // duplicate check via linear search (size ≤ 9, so fine)
                if (find(rows[r].begin(), rows[r].end(), ch) != rows[r].end()) return false;
                if (find(cols[c].begin(), cols[c].end(), ch) != cols[c].end()) return false;
                if (find(boxes[b].begin(), boxes[b].end(), ch) != boxes[b].end()) return false;

                rows[r].push_back(ch);
                cols[c].push_back(ch);
                boxes[b].push_back(ch);
            }
        }
        return true;
    }
};
