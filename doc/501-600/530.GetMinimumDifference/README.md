
# problem 530 : GetMinimumDifference

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/530.GetMinimumDifference/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int minval = 2147483647;
    TreeNode* prenode = nullptr;
    int getMinimumDifference(TreeNode* root) {
        inOrder(root);
        return minval;
    }

    void inOrder(TreeNode *t){
        if(t == nullptr){
            return;
        }
        inOrder(t->left);
        if(prenode != nullptr){
            minval = min(minval, t->val - prenode->val);
        }
        prenode = t;
        inOrder(t->right); 
    }
};

```

## C# Solution

```csharp

public class Solution {
    int minval = 2147483647;
    TreeNode prenode = null;
    public int GetMinimumDifference(TreeNode root) {
        InOrder(root);
        return minval;
    }

    public void InOrder(TreeNode t){
        if(t == null){
            return;
        }
        InOrder(t.left);
        if(prenode != null){
            minval = Math.Min(minval, t.val - prenode.val);
        }
        prenode = t;
        InOrder(t.right); 
    }

}

```

## Java Solution

```java

class Solution {
    public void inorder(TreeNode root, LinkedList<Integer> nodelist) {
        if (root == null) {
            return;
        }
        inorder(root.left, nodelist);
        nodelist.add(root.val);
        inorder(root.right, nodelist);
    }

    public int getMinimumDifference(TreeNode root) {
        LinkedList<Integer> nodelist = new LinkedList<>();
        inorder(root, nodelist);
        int n = nodelist.size();
        int minval = Integer.MAX_VALUE;
        for (int i = 0; i < n - 1; i++) {
            minval = Math.min(minval, nodelist.get(i + 1) - nodelist.get(i));
        }
        return minval;
    }
}

```

## Python Solution

```python

import math

class Solution:
    nodelist = []
    minval = math.inf
    def getdis(self, root):
        if root is None:
            return
        self.getdis(root.left)
        if len(self.nodelist) > 0:
            self.minval = min(root.val - self.nodelist[-1], self.minval) 
        self.nodelist.append(root.val)
        self.getdis(root.right)

    def getMinimumDifference(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.minval = math.inf
        self.nodelist = []
        self.getdis(root)
        return self.minval

```





