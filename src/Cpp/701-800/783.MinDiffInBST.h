
#ifndef __MIN_DIFF_IN_BST_H
#define __MIN_DIFF_IN_BST_H

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

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int lastval = -99999;
    int minsub = 99999;
    int minDiffInBST(TreeNode* root) {
        if (root == nullptr)
            return minsub;
        minDiffInBST(root->left);
        minsub = min(minsub, root->val - lastval);
        lastval = root->val;
        minDiffInBST(root->right);
        return minsub;
    }
};

#endif
