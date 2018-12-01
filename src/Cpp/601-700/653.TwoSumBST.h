
#ifndef __TWO_SUM_BST_H
#define __TWO_SUM_BST_H

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
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        inorder(root);
        int left = 0, right = nums.size() - 1;
        while (left < right){
            int sum = nums[left] + nums[right];
            if(sum == k) return true;
            else if(nums[left] + nums[right] < k) left++;
            else right--;
        }
        return false;
    }
private:
    vector<int> nums;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
    }
};

#endif
