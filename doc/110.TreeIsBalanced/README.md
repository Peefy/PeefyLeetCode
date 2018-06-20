
# problem 110 : TreeIsBalanced

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/110.TreeIsBalanced/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    int getHeight(TreeNode *node){
        if (node == NULL)
            return 0;
        auto left = getHeight(node->left);
        auto right = getHeight(node->right);
        if (left == -1 || right == -1 || abs(left - right) > 1)
            return -1;
        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode *root){
        if (root == NULL)
            return true;
        return getHeight(root) != -1;
    }
};

```

## C# Solution

```csharp

    public class TreeNode
    {
        public int val;
        public TreeNode left;
        public TreeNode right;
        public TreeNode(int x) { val = x; }
    }

    public class Solution
    {
        public int GetHeight(TreeNode node)
        {
            if (node == null)
                return 0;
            int left = GetHeight(node.left);
            int right = GetHeight(node.right);
            if (left == -1 || right == -1 || System.Math.Abs(left - right) > 1)
                return -1;
            return System.Math.Max(left, right) + 1;
        }
        public bool IsBalanced(TreeNode root)
        {
            if (root == null)
                return true;
            return GetHeight(root) != -1;
        }
    }

```

## Java Solution

```java

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}

class Solution {
    public int getHeight(TreeNode node){
        if (node == null)
            return 0;
        int left = getHeight(node.left);
        int right = getHeight(node.right);
        if (left == -1 || right == -1 || Math.abs(left - right) > 1)
            return -1;
        return Math.max(left, right) + 1;
    }

    public boolean isBalanced(TreeNode root) {
        if (root == null)
            return true;
        return getHeight(root) != -1;
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

class Solution:
    isblance = True
    def getHeight(self, node):
        if node is None:
            return 0
        leftHeight = self.getHeight(node.left)
        rightHeight = self.getHeight(node.right)
        if abs(leftHeight - rightHeight) > 1:
            self.isblance = False
        return max(leftHeight, rightHeight) + 1

    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root is None:
            return True
        self.getHeight(root)
        return self.isblance

```


