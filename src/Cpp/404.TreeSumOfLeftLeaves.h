
#ifndef __TREE_SUM_OF_LEFT_LEAVES_H
#define __TREE_LOWEST_COMMON_ANCESTOR_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int sum = 0;
        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr) {
            sum = root->left->val;
        }
        return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};

#endif
