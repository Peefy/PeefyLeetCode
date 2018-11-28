
#ifndef __TRIM_BST_H
#define __TRIM_BST_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <set>

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
    cout.tie(nullptr);             
    return 0;
}();

class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root == nullptr)
            return nullptr;
        if (root->val >= L and root->val <= R){
            root->left = trimBST(root->left, L, R);
            root->right = trimBST(root->right, L, R);
        }       
        else if (root->val < L)
            root = trimBST(root->right, L, R);
        else if (root->val > R)
            root = trimBST(root->left, L, R);
        return root;
    }
};

#endif
