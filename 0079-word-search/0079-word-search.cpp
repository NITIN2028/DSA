class Solution {
public:

    bool solve(int i, int j, int index, string& word,
               vector<vector<char>>& board) {

        
        if (i < 0 || i >= board.size() ||
            j < 0 || j >= board[0].size()) {
            return false;
        }

       
        if (board[i][j] != word[index]) {
            return false;
        }

        
        if (index == word.size() - 1) {
            return true;
        }

        
        char temp = board[i][j];
        board[i][j] = '#';

        
        bool found =
            solve(i + 1, j, index + 1, word, board) ||  // down
            solve(i - 1, j, index + 1, word, board) ||  // up
            solve(i, j + 1, index + 1, word, board) ||  // right
            solve(i, j - 1, index + 1, word, board);    // left

        
        board[i][j] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {

        int n = board.size();
        int m = board[0].size();

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (board[i][j] == word[0]) {

                    if (solve(i, j, 0, word, board)) {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};