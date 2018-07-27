
# problem 235 : TreeLowestCommonAncestor

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/235.TreeLowestCommonAncestor/problem.png"/>

没有审题清楚,是*二叉搜索树*，不是*普通二叉树*

## C++ Solution

```c++

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) {
            return nullptr;
        }
        if (max(p->val, q->val) < root->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        if (min(p->val, q->val) > root->val) {
            return lowestCommonAncestor(root->right, p, q);
        }
        return root;
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

public class Solution {
    public TreeNode LowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null) {
            return null;
        }
        if (Math.Max(p.val, q.val) < root.val) {
            return LowestCommonAncestor(root.left, p, q);
        }
        if (Math.Min(p.val, q.val) > root.val) {
            return LowestCommonAncestor(root.right, p, q);
        }
        return root;
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
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null) {
            return null;
        }
        if (Math.max(p.val, q.val) < root.val) {
            return lowestCommonAncestor(root.left, p, q);
        }
        if (Math.min(p.val, q.val) > root.val) {
            return lowestCommonAncestor(root.right, p, q);
        }
        return root;
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
    def contains(self, root, node):
        if root is None:
            return False
        result = False
        if root.val == node.val:
            result = True
            return result
        result = result or self.contains(root.left, node)
        result = result or self.contains(root.right, node)
        return result

    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        if root is None:
            return None
        node = self.lowestCommonAncestor(root.left, p, q)
        if node is not None:
            return node
        node = self.lowestCommonAncestor(root.right, p, q)
        if node is not None:
            return node
        if root.val == q.val and self.contains(root.right, p) == True:
            return root
        if root.val == p.val and self.contains(root.right, q) == True:
            return root     
        if root.val == p.val and self.contains(root.left, q) == True:
            return root
        if root.val == q.val and self.contains(root.left, p) == True:
            return root
        if self.contains(root.left, p) == True and self.contains(root.right, q) == True:
            return root
        if self.contains(root.right, p) == True and self.contains(root.left, q) == True:
            return root

```




