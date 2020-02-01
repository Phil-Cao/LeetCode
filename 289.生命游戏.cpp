/*
 * @lc app=leetcode.cn id=289 lang=cpp
 *
 * [289] 生命游戏
 */

// @lc code=start
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        if (board.empty())
            return;
        int R = board.size();
        int C = board[0].size();
        int nearby[8][2] = {{-1, 0}, {-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}};
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                for (int k = 0; k < 8; ++k) {
                    int r = i + nearby[k][0];
                    int c = j + nearby[k][1];
                    if (r >= 0 && r < R && c >= 0 && c < C) {
                        board[i][j] += (board[r][c] & 1) << 1;
                    }
                }
            }
        }
        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                int t = board[i][j] >> 1;
                if (t < 2 || t > 3) {
                    board[i][j] = 0;
                } else if (t == 3) {
                    board[i][j] = 1;
                } else {
                    board[i][j] &= 1;
                }
            }
        }
        return;
    }
};

// @lc code=end

