
#ifndef __UNIQUE_BINARY_SEARCH_TREE_H
#define __UNIQUE_BINARY_SEARCH_TREE_H

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
    int numTrees(int n) {        
        if(n <= 1)
            return 1;
        long res = 1;
        for(int i = 1; i <= n; i++){
            res = res * (4 * i - 2) / (i + 1);
        }
        return (int) res;
    }
};

#endif
