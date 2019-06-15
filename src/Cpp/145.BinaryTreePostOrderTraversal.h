
#ifndef __BINARY_TREE_POSETORDER_TRAVERSAL_H
#define __BINARY_TREE_POSETORDER_TRAVERSAL_H

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
    cin.tie(NULL);
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) 
            return ans;   
        stack<TreeNode*> stackNode;
        stackNode.push(root);
        TreeNode* node;
        while (stackNode.size() > 0) {
            node = stackNode.top();
            stackNode.pop();
            ans.push_back(node->val);
            if (node->left != nullptr) {
                stackNode.push(node->left);
            }
            if (node->right != nullptr) {
                stackNode.push(node->right);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

#endif
