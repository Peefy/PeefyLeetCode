
#ifndef __BST_TO_GREATER_TREE_H
#define __BST_TO_GREATER_TREE_H

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
    int lastsum = 0;
    TreeNode* convertBST(TreeNode* root) {
        if (root == nullptr)
            return nullptr;
        convertBST(root->right);
        root->val += lastsum;
        lastsum = root->val;
        convertBST(root->left);
        return root;
    }
};

#endif
