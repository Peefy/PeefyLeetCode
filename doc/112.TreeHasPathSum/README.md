
# problem 112 : TreeHasPathSum

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/112.TreeHasPathSum/problem.png"/>

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
    bool hasPathSum(TreeNode *root, int sum){
        if (root == NULL)
            return false;
        stack<TreeNode*> nodestack;
        stack<int> sumstack;
        nodestack.push(root);
        sumstack.push(root->val);      
        while(nodestack.size() > 0){
            auto node = nodestack.top();
            nodestack.pop();
            auto nowsum = sumstack.top();
            sumstack.pop();
            if (node->left != NULL) {
                nodestack.push(node->left);
                sumstack.push(node->left->val + nowsum);
            }
            if (node->right != NULL)
            {
                nodestack.push(node->right);
                sumstack.push(node->right->val + nowsum);
            }
            if (node->left == NULL && node->right == NULL)
            {
                if (nowsum == sum)
                    return true;
            }
        }
        return false; 
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
        public bool HasPathSum(TreeNode root, int sum)
        {
            if (root == null)
                return false;
            if (root.left == null && root.right == null && root.val == sum)
                return true;
            return HasPathSum(root.left, sum - root.val) ||
                HasPathSum(root.right, sum - root.val);
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
    public boolean hasPathSum(TreeNode root, int sum) {
        if (root == null)
            return false;
        if (root.left == null && root.right == null && root.val == sum)
            return true;
        return hasPathSum(root.left, sum - root.val) || 
            hasPathSum(root.right, sum - root.val);
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
    def hasPathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: bool
        """
        if root is None:
            return False
        stack = []
        stack.append(root)
        nodesum = []
        nodesum.append(root.val)
        while len(stack) > 0:
            node = stack.pop()
            nowsum = nodesum.pop()
            if node.left is not None:
                stack.append(node.left)
                nodesum.append(node.left.val + nowsum)
            if node.right is not None:            
                stack.append(node.right)
                nodesum.append(node.right.val + nowsum)
            if node.left is None and node.right is None:
                if nowsum == sum:
                    return True
        return False

```


