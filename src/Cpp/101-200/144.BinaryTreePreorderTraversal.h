
#ifndef __BUILD_BINARY_TREE_PREORDER_TRAVERSAL_H
#ifndef __BUILD_BINARY_TREE_PREORDER_TRAVERSAL_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin->tie(NULL);
    return 0;
}();


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<TreeNode*> stack;
        vector<int> output;
        if (root == nullptr) {
            return output;
        }
        stack.push_back(root);
        while (stack.size() != 0) {
            TreeNode* node = stack.back();
            stack.pop_back();
            output.push_back(node->val);
            if (node->right != nullptr) {
                stack.push_back(node->right);
            }
            if (node->left != nullptr) {
                stack.push_back(node->left);
            }
        }
        return output;
    }
};


#endif
