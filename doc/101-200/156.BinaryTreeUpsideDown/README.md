
# problem 156 : BinaryTreeUpsideDown

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/156.BinaryTreeUpsideDown/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    TreeNode* upsideDownBinaryTree(TreeNode* root) {
        if(!root || !root->left) return root;
        TreeNode *newRoot = upsideDownBinaryTree(root->left);
        root->left->left = root->right;
        root->left->right = root;
        root->left = NULL, root->right = NULL;
        return newRoot;
    }
};


```

## C# Solution

```csharp

public class Solution {
    public TreeNode UpsideDownBinaryTree(TreeNode root) {
        if(root == null || root.left == null) 
            return root;
        TreeNode newRoot = UpsideDownBinaryTree(root.left);
        root.left.left = root.right;
        root.left.right = root;
        root.left = null; 
        root.right = null;
        return newRoot;
    }
}

```

## Java Solution

```java

class Solution {
    public TreeNode upsideDownBinaryTree(TreeNode root) {
        if(root == null || root.left == null) 
            return root;
        TreeNode newRoot = upsideDownBinaryTree(root.left);
        root.left.left = root.right;
        root.left.right = root;
        root.left = null; 
        root.right = null;
        return newRoot;
    }
}

```

## Python Solution

```python

class Solution:
    def upsideDownBinaryTree(self, root):
        if root is None or root.left is None: 
            return root
        newRoot = self.upsideDownBinaryTree(root.left)
        root.left.left = root.right
        root.left.right = root
        root.left = None
        root.right = None
        return newRoot

```


