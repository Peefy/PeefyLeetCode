
# problem 538 : BSTToGreaterTree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/538.BSTToGreaterTree/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int lastsum = 0;
    TreeNode* convertBST(TreeNode* root) {
        if (root == nullptr)
            return nullptr;
        convertBST(root->right);
        root->val += lastsum;
        lastsum = root->val;
        convertBST(root->left);
        return root;
    }
};

```

## C# Solution

```csharp

public class Solution {
    int lastsum = 0;
    public TreeNode ConvertBST(TreeNode root) {
        if (root == null)
            return null;
        ConvertBST(root.right);
        root.val += lastsum;
        lastsum = root.val;
        ConvertBST(root.left);
        return root;
    }
}

```

## Java Solution

```java

class Solution {
    public int lastsum = 0;
    public void order(TreeNode root){
        if (root == null)
            return;
        order(root.right);
        root.val += lastsum;
        lastsum = root.val;
        order(root.left);
    }

    public TreeNode convertBST(TreeNode root) {
        order(root);
        return root;
    }
}

```

## Python Solution

```python

class Solution:
    lastsum = 0
    def order(self, root):
        if root is None:
            return
        self.order(root.right)
        root.val += self.lastsum 
        self.lastsum = root.val
        self.order(root.left)

    def convertBST(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        self.order(root)
        return root

```





