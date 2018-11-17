
#ifndef __BINARY_TREE_TILT_H
#define __BINARY_TREE_TILT_H

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

static int pr = []() { 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();

class Solution {
public:
    int tilt = 0;
    int getval(TreeNode* root){
        if (root == nullptr) {
            return 0;
        }
        int leftsum = getval(root->left);
        int rightsum = getval(root->right);
        tilt += abs(leftsum - rightsum);
        return root->val + leftsum + rightsum;
    }
    int findTilt(TreeNode* root) {
        getval(root);
        return tilt;
    }
};

#endif
