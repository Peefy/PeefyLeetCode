
#ifndef __LEAF_SIMILAR_TREES_H
#define __LEAF_SIMILAR_TREES_H

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
    void order(TreeNode *node, vector<int>& list){
        if (node == nullptr)
            return;
        if (node->left == nullptr && node->right == nullptr){
            list.push_back(node->val);
            return;
        }
        order(node->left, list);
        order(node->right, list);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> list1;
        vector<int> list2;
        order(root1, list1);
        order(root2, list2);
        if (list1.size() != list2.size())
            return false;
        for(size_t i = 0; i < list1.size(); i++){
            if (list1[i] != list2[i])
                return false;
        }
        return true;
    }
};

#endif
