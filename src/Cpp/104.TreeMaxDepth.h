
#ifndef __TREE_MAX_DEPTH_H
#define __TREE_MAX_DEPTH_H

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
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        int max = left > right ? left : right;
        return max + 1;
    }
};

#endif
