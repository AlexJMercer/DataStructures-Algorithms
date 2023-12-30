#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9, vector<int>(9, 0));
        vector<vector<int>> col(9, vector<int>(9, 0));
        vector<vector<int>> mat(9, vector<int>(9, 0));
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.' && (row[i][board[i][j] - '1'] == 1 || col[j][board[i][j] - '1'] == 1))
                    return false;

                if (board[i][j] != '.') {
                    row[i][board[i][j] - '1'] = 1;
                    col[j][board[i][j] - '1'] = 1;
                }

                int r = 3 * (i / 3) + (j / 3);
                if (board[i][j] != '.' && mat[r][board[i][j] - '1'] == 1)
                    return false;

                if (board[i][j] != '.')
                    mat[r][board[i][j] - '1'] = 1;
            }
        }
        return true;
    }
};