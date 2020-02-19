/*
 * @lc app=leetcode.cn id=51 lang=cpp
 *
 * [51] N皇后
 */

// @lc code=start
class Solution {
public:
    vector<int> col;//占了的列
    vector<int> main_diag;//占了的主对角线
    vector<int> anti_diag;//占了的副对角线
    vector<vector<string>> solveNQueens(int n) {
        col = vector<int> (n, 0);
        main_diag = vector<int> (2 * n, 0);
        anti_diag = vector<int> (2 * n, 0);

        vector<vector<string>> res;
        vector<int> c(n, 0);
        dfs(c, res, 0);
        return res;
    }
    void dfs(vector<int> &c, vector<vector<string>> &res, int row){
        int n = c.size();
        if(row == n){
            vector<string> temp;
            for(int i = 0; i < n; i++){
                string s(n, '.');
                for(int j = 0; j < n; j++){
                    if(j == c[i]){
                        s[j] = 'Q';
                    }
                }
                temp.push_back(s);
            }
            res.push_back(temp);
            return;
        }
        for(int j = 0; j < n; j++){
            bool flag = col[j] == 0 && main_diag[row + j] == 0 &&
                    anti_diag[row - j + n] == 0;
            if(!flag){
                continue;//剪枝
            }
            c[row] = j;
            col[j] = main_diag[row + j] = anti_diag[row - j + n] = 1;
            dfs(c, res, row + 1);
            c[row] = 0;
            col[j] = main_diag[row + j] = anti_diag[row - j + n] = 0;
        }
    }
};
// @lc code=end

