
# problem 543 : DiameterOfBinaryTree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/543.DiameterOfBinaryTree/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int count = 0;
    int order(TreeNode *root){
        if (root == nullptr)
            return 0;
        int leftcount = order(root->left);
        int rightcount = order(root->right);
        if (leftcount + rightcount > count)
            count = leftcount + rightcount;
        return max(leftcount, rightcount) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        count = 0;
        order(root);
        return count;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        int count = 0;
        int order(TreeNode root)
        {
            if (root == null)
                return 0;
            int leftcount = order(root.left);
            int rightcount = order(root.right);
            if (leftcount + rightcount > count)
                count = leftcount + rightcount;
            return Math.Max(leftcount, rightcount) + 1;
        }

        public int DiameterOfBinaryTree(TreeNode root)
        {
            count = 0;
            order(root);
            return count;
        }
    }

```

## Java Solution

```java

class Solution {
    int count = 0;
    public int order(TreeNode root){
        if (root == null)
            return 0;
        int leftcount = order(root.left);
        int rightcount = order(root.right);
        if (leftcount + rightcount > count)
            count = leftcount + rightcount;
        return Math.max(leftcount, rightcount) + 1;
    }

    public int diameterOfBinaryTree(TreeNode root) {
        count = 0;
        order(root);
        return count;
    }
}

```

## Python Solution

```python

class Solution:
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.count = 0
        def order(root):
            if root is None:
                return 0
            leftcount = order(root.left)
            rightcount = order(root.right)
            if leftcount + rightcount > self.count:
                self.count = leftcount + rightcount
            return max(leftcount, rightcount) + 1
        self.count = 0
        order(root)
        return self.count

```





