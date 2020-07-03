// LeetCode257 二叉树的所有路径

//给定一个二叉树，返回所有从根节点到叶子节点的路径。 
//
// 说明: 叶子节点是指没有子节点的节点。 
//
// 示例: 
//
// 输入:
//
//   1
// /   \
//2     3
// \
//  5
//
//输出: ["1->2->5", "1->3"]
//
//解释: 所有根节点到叶子节点的路径为: 1->2->5, 1->3 
// Related Topics 树 深度优先搜索 
// 👍 285 👎 0

#include<iostream>

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {

        if(!root) return string("\"");
        if(!root->left && !root->right) return string("->%s",s)
    }
};

// 解法2：迭代。
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {

        vector<string> res;
        string path;


    }
};


//leetcode submit region end(Prohibit modification and deletion)


// Test



/** 
 * KnowledgePoint:
 * 
 * T(n) = 
 * 
 * O(n) = 
 * 
 * Summary: 
 */ 