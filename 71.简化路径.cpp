/*
 * @lc app=leetcode.cn id=71 lang=cpp
 *
 * [71] 简化路径
 */

// @lc code=start
class Solution {
public:
    string simplifyPath(string path) {
        path = path + "/";
        stack<string> st;
        string dir;
        for(auto c : path){
            if(c == '/'){
                if(dir == ".." && !st.empty()){
                    st.pop();
                }else if(dir != "." && dir != ".." && !dir.empty()){
                    st.push(dir);
                }
                dir.clear();
            }else{
                dir += c;
            }
        }
        string res;
        while(!st.empty()){
            auto t = st.top();
            st.pop();
            res = res + string(t.rbegin(), t.rend()) + '/';
        }
        reverse(res.begin(), res.end());
        if(res.empty()){
            res = '/';
        }
        return res;
    }
};
// @lc code=end

