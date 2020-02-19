/*
 * @lc app=leetcode.cn id=52 lang=cpp
 *
 * [52] N皇后 II
 */

// @lc code=start
class Solution {
public:
    vector<int> col;//占了的列
    vector<int> main_diag;//占了的主对角线
    vector<int> anti_diag;//占了的副对角线
    int count = 0;
    int totalNQueens(int n) {
        col = vector<int> (n, 0);
        main_diag = vector<int> (2 * n, 0);
        anti_diag = vector<int> (2 * n, 0);

        //vector<vector<string>> res;
        dfs(0);
        return count;
    }
    void dfs(int row){
        int n = col.size();
        if(row == n){
            count++;
            return;
        }
        for(int j = 0; j < n; j++){
            bool flag = col[j] == 0 && main_diag[row + j] == 0 &&
                    anti_diag[row - j + n] == 0;
            if(!flag){
                continue;//剪枝
            }
            //c[row] = j;
            col[j] = main_diag[row + j] = anti_diag[row - j + n] = 1;
            dfs(row + 1);
            //c[row] = 0;
            col[j] = main_diag[row + j] = anti_diag[row - j + n] = 0;
        }
    }
};
// @lc code=end

