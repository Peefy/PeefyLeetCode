
# problem 100 : IsSameTree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/100.IsSameTree/problem.png"/>

## C++ Solution

```c++
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}

};

class Solution
    {
      public:
        bool isSameTree(TreeNode *p, TreeNode *q)
        {
            if (p == NULL && q == NULL)
                return true;
            else if(p != NULL && q != NULL && p->val == q->val){
                auto l = isSameTree(p->left, q->left);
                auto r = isSameTree(p->right, q->right);
                return l && r;
            }
            else
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
        public bool IsSameTree(TreeNode p, TreeNode q)
        {
            if (p == null && q == null)
                return true;
            if (p != null && q == null)
                return false;
            if (p == null && q != null)
                return false;
            return p.val == q.val &&
                IsSameTree(p.left, q.left) &&
                IsSameTree(p.right, q.right);
        }
    }
```

## Java Solution

```java
public class TreeNode {     
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}

class Solution {
    public boolean isSameTree(TreeNode p, TreeNode q) {
        if (p == null && q == null)
            return true;
        if (p != null && q == null)
            return false;
        if (p == null && q != null)
            return false;
        return p.val == q.val && 
            isSameTree(p.left, q.left) && 
            isSameTree(p.right, q.right);
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
    isSame = True
    def change(self, isSame):
        if isSame == False:
            self.isSame = isSame
    
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        if p is None and q is None:
            self.change(True)
            return True
        if p is None and q is not None:
            self.change(False)
            return False
        if p is not None and q is None:
            self.change(False)
            return False
        if p.val == q.val:
            self.change(True)
        else:
            self.change(False)
        isSame = self.isSameTree(p.left, q.left)
        self.change(isSame)
        isSame = self.isSameTree(p.right, q.right)   
        self.change(isSame)
        return self.isSame

```


