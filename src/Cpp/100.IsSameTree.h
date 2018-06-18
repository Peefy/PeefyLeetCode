
#ifndef __CLIMB_STAIRS_H
#define __CLIMB_STAIRS_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}

};

class Solution
    {
      public:
        bool isSameTree(TreeNode *p, TreeNode *q)
        {
            if (p == NULL && q == NULL)
                return true;
            else if(p != NULL && q != NULL && p->val == q->val){
                auto l = isSameTree(p->left, q->left);
                auto r = isSameTree(p->right, q->right);
                return l && r;
            }
            else
                return false;
        }
    };

#endif
