/*
 * @lc app=leetcode.cn id=117 lang=cpp
 *
 * [117] 填充每个节点的下一个右侧节点指针 II
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        //层次遍历法，将每一层节点从左往右链接
        if(!root) return root;
        queue<Node *> level;
        level.push(root);
        while(!level.empty()){
            int n = level.size();
            for(int i = 0; i < n; i++){
                Node * temp = level.front();
                level.pop();
                if(i != n-1){
                    Node * tNext = level.front();
                    temp -> next = tNext;
                }
                if(temp -> left){
                    level.push(temp -> left);
                }
                if(temp -> right){
                    level.push(temp -> right);
                }
            }
        }
        return root;
    }
};
// @lc code=end

