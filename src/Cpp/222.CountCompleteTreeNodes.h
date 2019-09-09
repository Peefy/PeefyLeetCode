
#ifndef __COUNT_COMPLETE_TREE_NODES_H
#ifndef __COUNT_COMPLETE_TREE_NODES_H

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

class Solution
{
public:
    int countNodes(TreeNode *root)
    {
        int h = 0, lo = 0, hi = 0;
        if (!root)
            return 0;

        TreeNode *node = root;
        while (node)
        {
            ++h;
            node = node->left;
        }

        lo = 1 << (h - 1); // 4
        hi = (1 << h) - 1; // 7

        while (lo < hi)
        {
            int mid = lo + (hi - lo + 1 >> 1); // 6,7
            int n = mid;                       // 6,7
            stack<int> path;                   // 6,3 | 7,3
            while (n != 1)
            {
                path.push(n);
                n >>= 1;
            }
            node = root;
            int cur = 1;
            while (node && !path.empty())
            {
                if ((cur << 1) == path.top())
                { // 1*2 == 3, 3*2 == 6 | 1*2 == 3, 3*2 == 7
                    node = node->left;
                }
                else
                {
                    node = node->right;
                }
                cur = path.top();
                path.pop();
            }

            if (node)
            {
                lo = mid; // 6
            }
            else
            {
                hi = mid - 1;
            }
        }
        return lo;
    }
};

#endif
