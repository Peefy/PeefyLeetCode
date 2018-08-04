
#ifndef __BINARY_TREE_PATHS_H
#define __BINARY_TREE_PATHS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stdio.h>

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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> l;
        string to = "->";
        if (root == nullptr) {
            return l;
        }
        if (root->left == nullptr && root->right == nullptr){
            l.push_back(to_string(root->val)); 
            return l;
        }
        auto ll = binaryTreePaths(root->left);
        auto lr = binaryTreePaths(root->right);
        for (string ss : ll){  
            l.push_back(to_string(root->val) + to + ss);
        }
        for (string ss : lr){
            l.push_back(to_string(root->val) + to + ss);
        }
        return l;
    }
};

#endif
