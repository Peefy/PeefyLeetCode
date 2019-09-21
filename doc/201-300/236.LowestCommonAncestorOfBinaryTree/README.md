
# problem 236 : LowestCommonAncestorOfBinaryTree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/236.LowestCommonAncestorOfBinaryTree/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr || root == p || root == q)
            return root;
        auto* l = lowestCommonAncestor(root->left, p, q);
        auto* r = lowestCommonAncestor(root->right, p, q);
        if (l == nullptr)
            return r;
        else {
            if (r == nullptr)
                return l;
            return root;
        }
    }
};

```

## C# Solution

```csharp

public class Solution {
    public TreeNode LowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null || root.Equals(p) || root.Equals(q))
            return root;
        TreeNode l = LowestCommonAncestor(root.left, p, q);
        TreeNode r = LowestCommonAncestor(root.right, p, q);
        if (l == null)
            return r;
        else {
            if (r == null)
                return l;
            return root;
        }
    }
}

```

## Java Solution

```java

class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null || root.equals(p) || root.equals(q))
            return root;
        TreeNode l = lowestCommonAncestor(root.left, p, q);
        TreeNode r = lowestCommonAncestor(root.right, p, q);
        if (l == null)
            return r;
        else {
            if (r == null)
                return l;
            return root;
        }
    }
}

```

## Python Solution

```python

class Solution:
    def lowestCommonAncestor(self, root, p, q):
        if root is None or root == p or root == q:
            return root
        l = self.lowestCommonAncestor(root.left, p, q)
        r = self.lowestCommonAncestor(root.right, p, q)
        if l is None:
            return r
        else:
            if r is None:
                return l
            return root     

```




