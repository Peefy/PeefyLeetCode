
#ifndef __TREE_MIN_DEPTH_H
#define __TREE_MIN_DEPTH_H

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
    int minDepth(TreeNode *root)
    {
        if (root == NULL) {
            return 0;
        }
        else if (root->left == NULL) {
            return minDepth(root->right) + 1;
        }
        else if (root->right== NULL){
            return minDepth(root->left) + 1;
        }
        return min(minDepth(root->right), minDepth(root->left)) + 1;
    }
};

#endif
