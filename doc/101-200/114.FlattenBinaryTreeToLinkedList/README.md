
# problem 114 : FlattenBinaryTreeToLinkedList

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/114.FlattenBinaryTreeToLinkedList/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    void flatten(TreeNode* root) {
        if (root == nullptr)
            return;
        flatten(root->left);
        flatten(root->right);
        auto* tmp = root->right;
        root->right = root->left;
        root->left = nullptr;
        while(root->right != nullptr)
            root = root->right;
        root->right = tmp;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public void Flatten(TreeNode root) {
        if (root == null)
            return;
        Flatten(root.left);
        Flatten(root.right);
        TreeNode tmp = root.right;
        root.right = root.left;
        root.left = null;
        while(root.right != null)
            root = root.right;
        root.right = tmp;
    }
}

```

## Java Solution

```java

class Solution {
    public void flatten(TreeNode root) {
        if (root == null)
            return;
        flatten(root.left);
        flatten(root.right);
        TreeNode tmp = root.right;
        root.right = root.left;
        root.left = null;
        while(root.right != null)
            root = root.right;
        root.right = tmp;
    }
}

```

## Python Solution

```python

class Solution:
    def dfs(self, root):
        if root is None:
            return None
        leftnode = self.dfs(root.left)
        rightnode = self.dfs(root.right)
        node = leftnode
        while node and node.right:
            node = node.right
        if leftnode:
            node.right = rightnode
            root.right = leftnode
            root.left = None
        return root

    def flatten(self, root):
        """
        Do not return anything, modify root in-place instead.
        """
        self.dfs(root)

```


