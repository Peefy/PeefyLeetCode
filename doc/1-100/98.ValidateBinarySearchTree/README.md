
# Problem 98 : ValidateBinarySearchTree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/98.ValidateBinarySearchTree/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    long tmp = INT64_MIN;
    bool isValidBST(TreeNode* root) {
        if(root == nullptr) return true;
        if (isValidBST(root->left)) {
            if (tmp < root->val) {
                tmp = root->val;
                return isValidBST(root->right);
            }
        }
        return false;
    }
};

```

## C# Solution

```csharp

public class Solution {
    long tmp = long.MinValue;
    public bool IsValidBST(TreeNode root) {
                if(root == null) return true;
        if (IsValidBST(root.left)) {
            if (tmp < root.val) {
                tmp = root.val;
                return IsValidBST(root.right);
            }
        }
        return false;
    }
}

```

## Java Solution

```java

class Solution {
    long tmp = Long.MIN_VALUE;
    public boolean isValidBST(TreeNode root) {
        if(root == null) return true;
        if (isValidBST(root.left)) {
            if (tmp < root.val) {
                tmp = root.val;
                return isValidBST(root.right);
            }
        }
        return false;
   }
}

```

## Python Solution

```python

class Solution:
    def __init__(self):
        self.tmp = -float('inf')

    def isValidBST(self, root: TreeNode) -> bool:
        if not root: 
            return True
        if not self.isValidBST(root.left): 
            return False
        if self.tmp >= root.val: 
            return False
        self.tmp = root.val
        if not self.isValidBST(root.right): 
            return False
        return True

```


