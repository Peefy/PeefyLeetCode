
#ifndef __TREE_PATH_SUM_III_H
#define __TREE_PATH_SUM_III_H

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
    int pathSumValue(TreeNode* node, int sum, int val){
        if (node == nullptr) {
            return 0;
        }
        int count = 0;
        val += node->val;
        if (val == sum)
            count += 1;
        return count + pathSumValue(node->left, sum, val) + pathSumValue(node->right, sum, val);
    }

    int pathSum(TreeNode* root, int sum) {
        if (root == nullptr)
            return 0;
        return pathSum(root->left, sum) + pathSum(root->right, sum) + pathSumValue(root, sum, 0);
    }
};

#endif
