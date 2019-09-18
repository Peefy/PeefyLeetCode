
#ifndef __BUILD_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H
#define __BUILD_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_H

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        vector<TreeNode*> level;
        level.push_back(root);
        while (level.size() > 0){
            vector<int> cur;
            vector<TreeNode*> next_level;
            for (TreeNode* node : level) {
                cur.push_back(node->val);
                if (node->left != nullptr)
                    next_level.push_back(node->left);
                if (node->right != nullptr)
                    next_level.push_back(node->right);
            }
            ans.push_back(cur);
            level = next_level;
        }
        return ans;
    }
};

#endif
