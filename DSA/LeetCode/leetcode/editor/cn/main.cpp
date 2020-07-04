#include "base-tree.h"

int main(int argc, char *argv[]) {

    cout << "pan: run main success." << endl;

    vector<int> levelOrderVector{1, 2, 3, 4, 5};

    BaseTree baseTree = new BaseTree();

    TreeNode* root = baseTree.createTreeFromLevelOrderVector(levelOrderVector);

    baseTree.levelOrderTraversal(root);

    return 0;
}