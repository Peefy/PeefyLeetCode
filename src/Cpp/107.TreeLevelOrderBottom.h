
#ifndef __TREE_LEVEL_ORDER_BOTTOM_H
#define __TREE_LEVEL_ORDER_BOTTOM_H

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
        int maxDepth(TreeNode *root)
        {
            if (root == NULL)
                return 0;
            int left = maxDepth(root->left);
            int right = maxDepth(root->right);
            int max = left > right ? left : right;
            return max + 1;
        }

        vector<vector<int>> levelOrderBottom(TreeNode *root)
        {
            vector<vector<int>> result;
            if (root == NULL)
                return result;
            int depth = maxDepth(root);
            for(int i = 0;i < depth;++i)
            {
                vector<int> tmp;
                result.push_back(tmp);
            }
            --depth;
            queue<TreeNode> s;
            s.push(*root);
            while (s.size() > 0 && depth >= 0)
            {
                auto n = s.size();
                for (int i = 0;i < n;++i)
                {
                    TreeNode node = s.front();
                    s.pop();
                    result[depth].push_back(node.val);
                    if (node.left != NULL)
                        s.push(*node.left);
                    if (node.right != NULL)
                        s.push(*node.right);
                }
                --depth;
            }
            return result;
        }
    };


#endif
