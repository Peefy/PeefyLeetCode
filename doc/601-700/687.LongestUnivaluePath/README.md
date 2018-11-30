
# problem 687 : LongestUnivaluePath

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/687.LongestUnivaluePath/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int re = 0;
    int longestUnivaluePath(TreeNode* root) {
        dfs(root, 0);
        return re;
    }
    int dfs(TreeNode *node, int n) {
        if (node == nullptr)
			return 0;
		int left = dfs(node->left, node->val);
		int right = dfs(node->right, node->val);
		re = max(re, left + right);
		return node->val == n ? max(left, right) + 1 : 0;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        int re = 0;
        public int LongestUnivaluePath(TreeNode root)
        {
            dfs(root, 0);
            return re;
        }
        int dfs(TreeNode node, int n)
        {
            if (node == null)
                return 0;
            int left = dfs(node.left, node.val);
            int right = dfs(node.right, node.val);
            re = Math.Max(re, left + right);
            return node.val == n ? Math.Max(left, right) + 1 : 0;
        }
    }

```

## Java Solution

```java

class Solution {
    int re = 0;
    public int longestUnivaluePath(TreeNode root) {
        dfs(root, 0);
        return re;
    }
    public int dfs(TreeNode node, int n) {
        if (node == null)
			return 0;
		int left = dfs(node.left, node.val);
		int right = dfs(node.right, node.val);
		re = Math.max(re, left + right);
		return node.val == n ? Math.max(left, right) + 1 : 0;

    }
}

```

## Python Solution

```python

class Solution:
    maxnum = 1
    def pathvalandnum(self, node):
        left = 0
        if node.left is not None:
            left += self.pathvalandnum(node.left)
            if node.val == node.left.val:
                left += 1
            else: 
                left = 0
        right = 0
        if node.right is not None:
            right += self.pathvalandnum(node.right)
            if node.val == node.right.val:
                right += 1
            else: 
                right = 0
        currentLongestPath = 0
        if node.left is not None  and node.right is not None and node.left.val == node.right.val:
            currentLongestPath = left + right
        else:
            currentLongestPath = max(left, right)
        if currentLongestPath > self.maxnum:
            self.maxnum = currentLongestPath
        return max(left, right)
       
    def longestUnivaluePath(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0
        self.maxnum = 0
        self.pathvalandnum(root)
        return self.maxnum

```





