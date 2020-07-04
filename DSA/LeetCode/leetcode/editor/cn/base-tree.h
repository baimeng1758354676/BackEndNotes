#ifndef LEETCODE_BASE_TREE_H
#define LEETCODE_BASE_TREE_H

#endif //LEETCODE_BASE_TREE_H

#include <iostream>
#include <vector>
#include <queue>
using namespace  std;

// definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


class BaseTree {
public:
    TreeNode* root;

    // create
    TreeNode* createTreeFromLevelOrderVector(vector<int>& v);


    // traversal
    void levelOrderTraversal(TreeNode* root);
    void preOrderTraversal(TreeNode* root);
    void inOrderTraversal(TreeNode* root);
    void postOrderTraversal(TreeNode* root);

};


