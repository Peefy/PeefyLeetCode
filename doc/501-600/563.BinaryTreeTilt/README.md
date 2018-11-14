
# problem 563 : Binary Tree Tilt

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/563.BinaryTreeTilt/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int tilt = 0;
    int getval(TreeNode* root){
        if (root == nullptr) {
            return 0;
        }
        int leftsum = getval(root->left);
        int rightsum = getval(root->right);
        tilt += abs(leftsum - rightsum);
        return root->val + leftsum + rightsum;
    }
    int findTilt(TreeNode* root) {
        getval(root);
        return tilt;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        private int tilt = 0;
        public int GetVal(TreeNode root)
        {
            if (root == null)
            {
                return 0;
            }
            int leftsum = GetVal(root.left);
            int rightsum = GetVal(root.right);
            tilt += Math.Abs(leftsum - rightsum);
            return root.val + leftsum + rightsum;
        }

        public int FindTilt(TreeNode root)
        {
            GetVal(root);
            return tilt;
        }
    }

```

## Java Solution

```java

class Solution {
    private int tilt = 0;
    
    public int getval(TreeNode root){
        if (root == null) {
            return 0;
        }
        int leftsum = getval(root.left);
        int rightsum = getval(root.right);
        tilt += Math.abs(leftsum - rightsum);
        return root.val + leftsum + rightsum;
    }

    public int findTilt(TreeNode root) {
        getval(root);
        return tilt;
    }
}

```

## Python Solution

```python

class Solution:
    def findTilt(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.tilt = 0
        def getval(root):
            if root is None:
                return 0
            leftsum = getval(root.left)
            rightsum = getval(root.right)
            self.tilt += abs(leftsum - rightsum)
            return root.val + leftsum + rightsum
        getval(root)
        return self.tilt

```





