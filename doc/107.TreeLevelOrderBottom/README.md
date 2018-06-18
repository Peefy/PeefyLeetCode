
# problem 107 : TreeLevelOrderBottom

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/107.TreeLevelOrderBottom/problem.png"/>

## C++ Solution

```c++

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}

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
        public int MaxDepth(TreeNode root)
        {
            return root == null ? 0 : 
                System.Math.Max(MaxDepth(root.left), MaxDepth(root.right)) + 1;
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
    public int maxDepth(TreeNode root) {
        return root == null ? 0 :
            Math.max(maxDepth(root.left), maxDepth(root.right)) + 1;
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
    def __maxDepth(self, root):
        if root is None:
            return 0
        depth = 0
        node = root
        if node.left is not None or node.right is not None:
            depth += 1
            depth += max(self.__maxDepth(node.left), self.__maxDepth(node.right))
        return depth

    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0
        return self.__maxDepth(root) + 1

```


