

#ifndef __GET_MIN_DISTANCE_IN_BST_H
#define __GET_MIN_DISTANCE_IN_BST_H

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
    int minval = 2147483647;
    TreeNode* prenode = nullptr;
    int getMinimumDifference(TreeNode* root) {
        inOrder(root);
        return minval;
    }

    void inOrder(TreeNode *t){
        if(t == nullptr){
            return;
        }
        inOrder(t->left);
        if(prenode != nullptr){
            minval = min(minval, t->val - prenode->val);
        }
        prenode = t;
        inOrder(t->right); 
    }
};

#endif


class Solution {
    
    public int getMinimumDifference(TreeNode root) {
        inOrder(root);
        return min;
        
    }
    public 
}
