
#ifndef __KTH_SMALLEST_ELEMENT_IN_BST_H
#define __KTH_SMALLEST_ELEMENT_IN_BST_H

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
    cin->tie(NULL);
    return 0;
}();


class Solution {
private:
    int i = 0;
    int val = 0;
    
public:

    void ldr(TreeNode* root, int k) {
        if (root == nullptr) {
            return;
        }
        ldr(root->left, k);
        if (k == ++i) {
            val = root->val;
        }
        ldr(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        ldr(root, k);
        return val;
    }
};

#endif
