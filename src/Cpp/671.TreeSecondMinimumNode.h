
#ifndef __TREE_SECOND_MINIMUM_H
#define __TREE_SECOND_MINIMUM_H

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
    int min = INT32_MAX;
    int secondMin = -1;
    int findSecondMinimumValue(TreeNode* root) {
        if (root == nullptr) {
            return -1;
        }
        if (root->val < min) {
            if (min != INT32_MAX) {
                secondMin = min;
            }
            min = root->val;
        } else if (root->val > min && (root->val < secondMin || secondMin == -1) ) {
            secondMin = root->val;
        }
        findSecondMinimumValue(root->left);
        findSecondMinimumValue(root->right);
        return secondMin;
    }
};

#endif
