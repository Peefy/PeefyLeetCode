
#ifndef __TREE_SUM_ROOT_LEAF_NUMBERS_H
#define __TREE_SUM_ROOT_LEAF_NUMBERS_H

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
    cin->tie(nullptr);
    return 0;
}();


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


class Solution {
public:
    int sum(TreeNode* root, int val) {
        if (root == nullptr) {
            return 0;
        }
        val = 10 * val + root->val;
        if (root->left == nullptr && root->right == nullptr) {
            return val;
        }
        return sum(root->left, val) + sum(root->right, val);
    }
    
    int sumNumbers(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return sum(root, 0);
    }
};

#endif
