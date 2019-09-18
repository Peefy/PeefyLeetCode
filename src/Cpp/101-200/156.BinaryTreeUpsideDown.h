
#ifndef __BINARY_TREE_UPSIDE_DOWN_H
#define __BINARY_TREE_UPSIDE_DOWN_H

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
    cin->tie(NULL);
    return 0;
}();


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



class Solution {
public:
    TreeNode* upsideDownBinaryTree(TreeNode* root) {
        if(!root || !root->left) return root;
        TreeNode *newRoot = upsideDownBinaryTree(root->left);
        root->left->left = root->right;
        root->left->right = root;
        root->left = NULL, root->right = NULL;
        return newRoot;
    }
};


#endif
