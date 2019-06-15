
#ifndef __BINARY_TREE_INORDER_TRAVERSAL_H
#define __BINARY_TREE_INORDER_TRAVERSAL_H

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
    cin.tie(NULL);
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == nullptr)
            return res;
        vector<bool> stackVisited;
        vector<TreeNode*> stackNode;
        stackVisited.push_back(false);
        stackNode.push_back(root);
        while (stackNode.size() > 0){
            TreeNode* cur_root = stackNode.back();
            stackNode.pop_back();
            bool vis = stackVisited.back();
            stackVisited.pop_back();
            if (vis == true)
                res.push_back(cur_root->val);                
            else{
                if (cur_root->right != nullptr){
                    stackNode.push_back(cur_root->right);
                    stackVisited.push_back(false);
                }          
                stackNode.push_back(cur_root);
                stackVisited.push_back(true);
                if (cur_root->left != nullptr){
                    stackNode.push_back(cur_root->left);
                    stackVisited.push_back(false);
                }             
            }        
        }
        return res;
    }
};

#endif
