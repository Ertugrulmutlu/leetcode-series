using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};

        function<bool(int,int,int)> dfs = [&](int r, int c, int i) {
            if (i == word.size()) return true;
            if (r < 0 || r >= m || c < 0 || c >= n || board[r][c] != word[i]) return false;
            char tmp = board[r][c];
            board[r][c] = '#';
            for (auto [dr, dc] : dirs) {
                if (dfs(r+dr, c+dc, i+1)) {
                    board[r][c] = tmp;
                    return true;
                }
            }
            board[r][c] = tmp;
            return false;
        };

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (dfs(r, c, 0)) return true;
            }
        }
        return false;
    }
};
