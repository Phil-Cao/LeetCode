/*
 * @lc app=leetcode.cn id=84 lang=cpp
 *
 * [84] 柱状图中最大的矩形
 */

// @lc code=start
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> w;
        int max_area = 0;
        w.push(-1);
        for(int i = 0; i < heights.size(); i++){
            while(w.top() != -1 && heights[w.top()] >= heights[i]){
                int tmp = w.top();
                w.pop();
                max_area = max(max_area, heights[tmp]*(i - w.top() - 1));
            }
            w.push(i);
        }
        while(w.top() != -1){
            int tmp = w.top();
            w.pop();
            int s = heights.size();
            max_area = max(max_area, heights[tmp]*(s-w.top()-1));
        }
        return max_area;
    }
};
// @lc code=end

