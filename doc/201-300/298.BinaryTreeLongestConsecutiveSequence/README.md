
# problem 298 : BinaryTreeLongestConsecutiveSequence

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/298.BinaryTreeLongestConsecutiveSequence/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int longestConsecutive(TreeNode* root) {
        return helper(root, NULL, 0);
    }
    int helper(TreeNode *root, TreeNode *p, int res) {
        if (!root) return res;
        res = (p && root->val == p->val + 1) ? res + 1 : 1;
        return max(res, max(helper(root->left, root, res), helper(root->right, root, res)));
    }
};

```

## C# Solution

```csharp

public class Solution {
    private int maxLen = 0;
     
    public int LongestConsecutive(TreeNode root) {
        LongestConsecutive(root, 0, 0);
        return maxLen;
    }
     
    private void LongestConsecutive(TreeNode root, int lastVal, int curLen) {
        if (root == null) return;
        if (root.val != lastVal + 1) curLen = 1;
        else curLen++;
        maxLen = Math.Max(maxLen, curLen);
        LongestConsecutive(root.left, root.val, curLen);
        LongestConsecutive(root.right, root.val, curLen);
    }
}

```

## Java Solution

```java

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}

public class Solution {
    private int maxLen = 0;
     
    public int longestConsecutive(TreeNode root) {
        longestConsecutive(root, 0, 0);
        return maxLen;
    }
     
    private void longestConsecutive(TreeNode root, int lastVal, int curLen) {
        if (root == null) return;
        if (root.val != lastVal + 1) curLen = 1;
        else curLen++;
        maxLen = Math.max(maxLen, curLen);
        longestConsecutive(root.left, root.val, curLen);
        longestConsecutive(root.right, root.val, curLen);
    }
}

```

## Python Solution

```python

class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution(object):
    def longestConsecutive(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.max_len = 0
        def longestConsecutiveHelper(root):
            if not root:
                return 0
            left_len = longestConsecutiveHelper(root.left)
            right_len = longestConsecutiveHelper(root.right)
            cur_len = 1
            if root.left and root.left.val == root.val + 1:
                cur_len = max(cur_len, left_len + 1);
            if root.right and root.right.val == root.val + 1:
                cur_len = max(cur_len, right_len + 1)
            self.max_len = max(self.max_len, cur_len, left_len, right_len)
            return cur_len
        longestConsecutiveHelper(root)
        return self.max_len

```




