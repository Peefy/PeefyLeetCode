
# problem 129 : TreeSumRootLeafNumbers

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/129.TreeSumRootLeafNumbers/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int sum(TreeNode* root, int val) {
        if (root == nullptr) {
            return 0;
        }
        val = 10 * val + root->val;
        if (root->left == nullptr && root->right == nullptr) {
            return val;
        }
        return sum(root->left, val) + sum(root->right, val);
    }
    
    int sumNumbers(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return sum(root, 0);
    }
};

```

## C# Solution

```csharp

public class Solution {
    private int sum(TreeNode root, int val) {
        if (root == null) {
            return 0;
        }
        val = 10 * val + root.val;
        if (root.left == null && root.right == null) {
            return val;
        }
        return sum(root.left, val) + sum(root.right, val);
    }
    public int SumNumbers(TreeNode root) {
        if (root == null) {
            return 0;
        }
        return sum(root, 0);
    }
}

```

## Java Solution

```java

class Solution {

    private int sum(TreeNode root, int sum) {
        if (root == null) {
            return 0;
        }
        sum = 10 * sum + root.val;
        if (root.left == null && root.right == null) {
            return sum;
        }
        return sum(root.left, sum) + sum(root.right, sum);
    }

    public int sumNumbers(TreeNode root) {
        if (root == null) {
            return 0;
        }
        return sum(root, 0);
    }
}

```

## Python Solution

```python

class Solution:
    def dfs(self, node, val):
        if node is None:
            return 0
        val = 10 * val + node.val
        if node.left is None and node.right is None:
            return val
        return self.dfs(node.left, val) + self.dfs(node.right, val)

    def sumNumbers(self, root):
        if root is None:
            return 0
        return self.dfs(root, 0)

```


