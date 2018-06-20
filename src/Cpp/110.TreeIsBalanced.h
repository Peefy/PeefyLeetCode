
#ifndef __CLIMB_STAIRS_H
#define __CLIMB_STAIRS_H

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

class Solution
{
  public:
    int getHeight(TreeNode *node){
        if (node == NULL)
            return 0;
        auto left = getHeight(node->left);
        auto right = getHeight(node->right);
        if (left == -1 || right == -1 || abs(left - right) > 1)
            return -1;
        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode *root){
        if (root == NULL)
            return true;
        return getHeight(root) != -1;
    }
};

#endif
