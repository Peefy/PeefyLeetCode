
#ifndef __DIAMETER_OF_BST_H
#define __DIAMETER_OF_BST_H

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
    int count = 0;
    int order(TreeNode *root){
        if (root == nullptr)
            return 0;
        int leftcount = order(root->left);
        int rightcount = order(root->right);
        if (leftcount + rightcount > count)
            count = leftcount + rightcount;
        return max(leftcount, rightcount) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        count = 0;
        order(root);
        return count;
    }
};

#endif
