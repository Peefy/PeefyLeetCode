
#ifndef __CLIMB_STAIRS_H
#define __CLIMB_STAIRS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>

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
    TreeNode *newNode(TreeNode *node, vector<int> nums, int start, int end)
    {
        if (start > end)
        {
            return NULL;
        }
        int mid = (start + end) / 2;
        node = new TreeNode(0);
        node->val = nums[mid];
        node->left = newNode(node, nums, start, mid - 1);
        node->right = newNode(node, nums, mid + 1, end);
        return node;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        int n = nums.size();
        TreeNode* root = NULL;
        if (n == 0)
        {
            return NULL;
        }
        return newNode(root, nums, 0, n - 1);
    }
};

#endif
