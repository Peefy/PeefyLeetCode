
# problem 404 : TreeSumOfLeftLeaves

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/404.TreeSumOfLeftLeaves/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int sum = 0;
        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr) {
            sum = root->left->val;
        }
        return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int SumOfLeftLeaves(TreeNode root) {
        if (root == null) {
            return 0;
        }
        int sum = 0;
        if (root.left != null && root.left.left == null && root.left.right == null) {
            sum = root.left.val;
        }
        return sum + SumOfLeftLeaves(root.left) + SumOfLeftLeaves(root.right);
    }
}

```

## Java Solution

```java

class Solution {
    public int sumOfLeftLeaves(TreeNode root) {
        if (root == null) {
            return 0;
        }
        int sum = 0;
        if (root.left != null && root.left.left == null && root.left.right == null) {
            sum = root.left.val;
        }
        return sum + sumOfLeftLeaves(root.left) + sumOfLeftLeaves(root.right);
    }
}

```

## Python Solution

```python

class Solution:
    def sumOfLeftLeaves(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return 0
        sum = 0
        if root.left is not None and root.left.left is None and root.left.right is None:
            sum = root.left.val
        return sum + self.sumOfLeftLeaves(root.left) + self.sumOfLeftLeaves(root.right)

```





