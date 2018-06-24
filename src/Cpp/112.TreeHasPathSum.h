
#ifndef __TREE_HAS_PATHSUM_H
#define __TREE_HAS_PATHSUM_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
  public:
    bool hasPathSum(TreeNode *root, int sum){
        if (root == NULL)
            return false;
        stack<TreeNode*> nodestack;
        stack<int> sumstack;
        nodestack.push(root);
        sumstack.push(root->val);      
        while(nodestack.size() > 0){
            auto node = nodestack.top();
            nodestack.pop();
            auto nowsum = sumstack.top();
            sumstack.pop();
            if (node->left != NULL) {
                nodestack.push(node->left);
                sumstack.push(node->left->val + nowsum);
            }
            if (node->right != NULL)
            {
                nodestack.push(node->right);
                sumstack.push(node->right->val + nowsum);
            }
            if (node->left == NULL && node->right == NULL)
            {
                if (nowsum == sum)
                    return true;
            }
        }
        return false; 
    }
};

#endif
