
# problem 669 : TrimBST

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/669.TrimBST/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(nullptr);             
    return 0;
}();

class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root == nullptr)
            return nullptr;
        if (root->val >= L and root->val <= R){
            root->left = trimBST(root->left, L, R);
            root->right = trimBST(root->right, L, R);
        }       
        else if (root->val < L)
            root = trimBST(root->right, L, R);
        else if (root->val > R)
            root = trimBST(root->left, L, R);
        return root;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public TreeNode TrimBST(TreeNode root, int L, int R) {
        if(root == null) return null;
        if(root.val < L) return TrimBST(root.right, L, R);
        if(root.val > R) return TrimBST(root.left, L, R);
        root.left = TrimBST(root.left, L, R);
        root.right = TrimBST(root.right, L, R);
        return root;
    }
}

```

## Java Solution

```java

class Solution {
    public TreeNode trimBST(TreeNode root, int L, int R) {
        if(root == null) return null;
        if(root.val < L) return trimBST(root.right, L, R);
        if(root.val > R) return trimBST(root.left, L, R);
        root.left = trimBST(root.left, L, R);
        root.right = trimBST(root.right, L, R);
        return root;
    }
}

```

## Python Solution

```python

class Solution:
    def trimBST(self, root, L, R):
        """
        :type root: TreeNode
        :type L: int
        :type R: int
        :rtype: TreeNode
        """
        if root is None:
            return None
        root.left = self.trimBST(root.left, L, R)
        root.right = self.trimBST(root.right, L, R)
        node = root
        if root.val < L:
            node = root.right
        if root.val > R:
            node = root.left
        return node

```





