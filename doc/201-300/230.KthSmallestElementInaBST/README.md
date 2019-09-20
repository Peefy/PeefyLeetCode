
# problem 230 : KthSmallestElementInaBST

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/230.KthSmallestElementInaBST/problem.png"/>

## C++ Solution

```c++

class Solution {
private:
    int i = 0;
    int val = 0;
    
public:

    void ldr(TreeNode* root, int k) {
        if (root == nullptr) {
            return;
        }
        ldr(root->left, k);
        if (k == ++i) {
            val = root->val;
        }
        ldr(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        ldr(root, k);
        return val;
    }
};

```

## C# Solution

```csharp

public class Solution {
    private int i = 0;
    private int val = 0;
    public int KthSmallest(TreeNode root, int k) {
        ldr(root, k);
        return val;
    }

    public void ldr(TreeNode root, int k) {
        if (root == null) {
            return;
        }
        ldr(root.left, k);
        if (k == ++i) {
            val = root.val;
        }
        ldr(root.right, k);
    }
}

```

## Java Solution

```java

class Solution {
    private int i = 0;
    private int val = 0;

    public int kthSmallest(TreeNode root, int k) {
        ldr(root, k);
        return val;
    }

    public void ldr(TreeNode root, int k) {
        if (root == null) {
            return;
        }
        ldr(root.left, k);
        if (k == ++i) {
            val = root.val;
        }
        ldr(root.right, k);
    }
}

```

## Python Solution

```python

class Solution:
    def mid_order(self, root):
        if not root: return
        yield from self.mid_order(root.left)
        yield root.val
        yield from self.mid_order(root.right)
        
    def kthSmallest(self, root: TreeNode, k: int) -> int:
        gen = self.mid_order(root)
        for _ in range(k - 1):
            next(gen)
        return next(gen)     

```




