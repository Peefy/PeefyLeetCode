
#ifndef __CLIMB_STAIRS_H
#define __CLIMB_STAIRS_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
  public:
    bool isSameNode(TreeNode *left, TreeNode *right){
        if (left == NULL && right == NULL)
            return true;
        if (left == NULL && right != NULL)
            return false;
        if (left != NULL && right == NULL)
            return false;
        return left->val == right->val &&
               isSameNode(left->left, right->right) &&
               isSameNode(left->right, right->left);
    }

    bool isSymmetric(TreeNode *root){
        if (root == NULL)
            return true;
        return isSameNode(root->left, root->right);
    }
};

#endif
