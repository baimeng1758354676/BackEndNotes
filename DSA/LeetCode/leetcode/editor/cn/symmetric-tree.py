// LeetCode101 对称二叉树 symmetric-tree

# 给定一个二叉树，检查它是否是镜像对称的。 
# 
#  
# 
#  例如，二叉树 [1,2,2,3,4,4,3] 是对称的。 
# 
#      1
#    / \
#   2   2
#  / \ / \
# 3  4 4  3
#  
# 
#  
# 
#  但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的: 
# 
#      1
#    / \
#   2   2
#    \   \
#    3    3
#  
# 
#  
# 
#  进阶： 
# 
#  你可以运用递归和迭代两种方法解决这个问题吗？ 
#  Related Topics 树 深度优先搜索 广度优先搜索 
#  👍 895 👎 0


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
    def isSymmetric(self, root: TreeNode) -> bool:
        
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