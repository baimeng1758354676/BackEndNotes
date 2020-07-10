// LeetCode100 相同的树 same-tree

# 给定两个二叉树，编写一个函数来检验它们是否相同。 
# 
#  如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。 
# 
#  示例 1: 
# 
#  输入:       1         1
#           / \       / \
#          2   3     2   3
# 
#         [1,2,3],   [1,2,3]
# 
# 输出: true 
# 
#  示例 2: 
# 
#  输入:      1          1
#           /           \
#          2             2
# 
#         [1,2],     [1,null,2]
# 
# 输出: false
#  
# 
#  示例 3: 
# 
#  输入:       1         1
#           / \       / \
#          2   1     1   2
# 
#         [1,2,1],   [1,1,2]
# 
# 输出: false
#  
#  Related Topics 树 深度优先搜索 
#  👍 394 👎 0


// pan: test header
//include "base-tree.h"

# leetcode submit region begin(Prohibit modification and deletion)
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
# leetcode submit region end(Prohibit modification and deletion)


// pan: test main
int main() {

    // test case
    vector<int> levelOrderVector{1,2,3,4,5};

    BaseTree baseTree;

    TreeNode* root = baseTree.createTreeFromLevelOrderVector(levelOrderVector, levelOrderVector.size());

    Solution1 solution;
    int temp = solution.findTilt(root);
    cout << temp << " ";

    return 0;
}

/** 
 * KnowledgePoint:
 * 
 * T(n) = 
 * 
 * O(n) = 
 * 
 * Summary: 
 */ 