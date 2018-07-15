
# problem 101 : IsSymmetricTree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/101.IsSymmetricTree/problem.png"/>

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
    bool isSameNode(TreeNode *left, TreeNode *right){
        if (left == NULL && right == NULL)
            return true;
        if (left == NULL && right != NULL)
            return false;
        if (left != NULL && right == NULL)
            return false;
        return left->val == right->val &&
               isSameNode(left->left, right->right) &&
               isSameNode(left->right, right->left);
    }

    bool isSymmetric(TreeNode *root){
        if (root == NULL)
            return true;
        return isSameNode(root->left, root->right);
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
        public bool IsSameTree(TreeNode p, TreeNode q)
        {
            if (p == null && q == null)
                return true;
            if (p != null && q == null)
                return false;
            if (p == null && q != null)
                return false;
            return p.val == q.val &&
                IsSameTree(p.left, q.left) &&
                IsSameTree(p.right, q.right);
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

class Solution {
    public boolean isSameTree(TreeNode p, TreeNode q) {
        if (p == null && q == null)
            return true;
        if (p != null && q == null)
            return false;
        if (p == null && q != null)
            return false;
        return p.val == q.val && 
            isSameTree(p.left, q.left) && 
            isSameTree(p.right, q.right);
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
    def isSameNode(self, left, right):
        if left is None and right is None:
            return True
        if left is None and right is not None:
            return False
        if left is not None and right is None:
            return False
        return left.val == right.val and \
            self.isSameNode(left.left, right.right) and \
            self.isSameNode(left.right, right.left)

    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if root is None:
            return True
        if root.left is None and root.right is None:
            return True
        if root.left is None and root.right is not None:
            return False
        if root.left is not None and root.right is None:
            return False
        return self.isSameNode(root.left, root.right)

```


