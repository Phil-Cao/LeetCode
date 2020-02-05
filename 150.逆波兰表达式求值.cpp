/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        for(auto token : tokens){
            if(!is_operator(token)){
                s.push(token);
            }else{
                int y = stoi(s.top());
                s.pop();
                int x = stoi(s.top());
                s.pop();
                if(token[0] == '+'){
                    x = x + y;
                }else if(token[0] == '-'){
                    x = x - y;
                }else if(token[0] == '*'){
                    x = x * y;
                }else{
                    x = x / y;
                }
                s.push(to_string(x));
            }
        }
        return stoi(s.top());
    }
private:
    bool is_operator(string op){
        return op.size() == 1 && string("+-*/").find(op) != string::npos;
    }
};
// @lc code=end

