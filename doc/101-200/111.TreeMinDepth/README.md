
# problem 111 : TreeMinDepth

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/111.TreeMinDepth/problem.png"/>

## C++ Solution

```c++

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
    int minDepth(TreeNode *root)
    {
        if (root == NULL) {
            return 0;
        }
        else if (root->left == NULL) {
            return minDepth(root->right) + 1;
        }
        else if (root->right== NULL){
            return minDepth(root->left) + 1;
        }
        return min(minDepth(root->right), minDepth(root->left)) + 1;
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
        public int MinDepth(TreeNode root)
        {
            if (root == null)
            {
                return 0;
            }
            else if (root.left != null && root.right == null)
            {
                return MinDepth(root.left) + 1;
            }
            else if (root.left == null && root.right != null)
            {
                return MinDepth(root.right) + 1;
            }
            return System.Math.Min(MinDepth(root.left), MinDepth(root.right)) + 1;
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
    public int minDepth(TreeNode root) {
        if (root == null){
            return 0;
        }
        else if (root.left != null && root.right == null){
            return minDepth(root.left) + 1;
        }
        else if (root.left == null && root.right != null) {
            return minDepth(root.right) + 1;
        }
        return Math.min(minDepth(root.left), minDepth(root.right)) + 1;
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
    def minDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0
        if root.left is None and root.right is not None:
            return self.minDepth(root.right) + 1
        elif root.right is None and root.left is not None:
            return self.minDepth(root.left) + 1
        return min(self.minDepth(root.right), self.minDepth(root.left)) + 1

```


