
# problem 771 : JewelsAndStones

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/771.JewelsAndStones/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int lastval = -99999;
    int minsub = 99999;
    int minDiffInBST(TreeNode* root) {
        if (root == nullptr)
            return minsub;
        minDiffInBST(root->left);
        minsub = min(minsub, root->val - lastval);
        lastval = root->val;
        minDiffInBST(root->right);
        return minsub;
    }
};

```

## C# Solution

```csharp

public class Solution {
    private int lastval = -99999;
    private int minsub = 99999;
    public int MinDiffInBST(TreeNode root) {
        if (root == null)
            return minsub;
        MinDiffInBST(root.left);
        minsub = Math.Min(minsub, root.val - lastval);
        lastval = root.val;
        MinDiffInBST(root.right);
        return minsub;
    }
}

```

## Java Solution

```java

class Solution {

    private int lastval = -99999;
    private int minsub = 99999;

    public int minDiffInBST(TreeNode root) {
        if (root == null)
            return minsub;
        minDiffInBST(root.left);
        minsub = Math.min(minsub, root.val - lastval);
        lastval = root.val;
        minDiffInBST(root.right);
        return minsub;
    }
}

```

## Python Solution

```python

class Solution:
    lastval = -99999
    minsub = 99999
    def minDiffInBST(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return self.minsub
        self.minDiffInBST(root.left)
        self.minsub = min(self.minsub, root.val - self.lastval)
        self.lastval = root.val
        self.minDiffInBST(root.right)
        return self.minsub

```





