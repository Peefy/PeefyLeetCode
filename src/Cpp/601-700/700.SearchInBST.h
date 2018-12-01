
#ifndef __SEARCH_IN_BST_H
#define __SEARCH_IN_BST_H

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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == nullptr){
            return nullptr;
        }
        while (root != nullptr && root->val != val){
            if(root->val > val){
                root = root->left;
            }else if(root->val < val){
                root = root->right;
            }
        }
        return root;
    }
};

#endif
