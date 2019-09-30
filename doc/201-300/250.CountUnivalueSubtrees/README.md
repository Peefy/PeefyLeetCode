
# problem 250 : CountUnivalueSubtrees

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/250.CountUnivalueSubtrees/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool dfs(TreeNode* root, int pre, int& ans) {
        if (root == nullptr)
            return true;
        bool flag1 = dfs(root->left, root->val, ans);
        bool flag2 = dfs(root->right, root->val, ans);
        if (flag1 && flag2)
            ans++;
        return (root->val == pre) && flag1 && flag2;
    }

    int countUnivalSubtrees(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int ans = 0;
        dfs(root, root->val, ans);
        return ans;
    }
};

```

## C# Solution

```csharp

public class Solution {
    bool dfs(TreeNode root, int pre, Int32 ans) {
        if (root == null) 
            return true;
        bool flag1 = dfs(root.left, root.val, ans);
        bool flag2 = dfs(root.right, root.val, ans);
        if (flag1 && flag2) 
            ans++;
        return (root.val == pre) && flag1 && flag2;
    }

    public int countUnivalSubtrees(TreeNode root) {
        if (root == null) 
            return 0;
        Int32 ans = 0;
        dfs(root, root.val, ans);
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    boolean dfs(TreeNode root, int pre, Integer ans) {
        if (root == null) 
            return true;
        boolean flag1 = dfs(root.left, root.val, ans);
        boolean flag2 = dfs(root.right, root.val, ans);
        if (flag1 && flag2) 
            ans++;
        return (root.val == pre) && flag1 && flag2;
    }

    public int countUnivalSubtrees(TreeNode root) {
        if (root == null) 
            return 0;
        Integer ans = 0;
        dfs(root, root.val, ans);
        return ans;
    }
}

```

## Python Solution

```python

class Solution:
    
    def __init__(self):
        self.ans = 0

    def dfs(self, root, pre):
        if root is None:
            return True
        flag1 = self.dfs(root.left, root.val)
        flag2 = self.dfs(root.right, root.val)
        if flag1 == True and flag2 == True:
            ans += 1
        return root.val == pre and flag1 and flag2


    def countUnivalSubtrees(self, root):
        if root is None:
            return 0
        self.ans = 0
        self.dfs(root, root.val)
        return self.ans     

```




