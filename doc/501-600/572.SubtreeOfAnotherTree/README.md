
# problem 572 : Subtree Of Another Tree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/572.SubtreeOfAnotherTree/problem.png"/>

## C++ Solution

```c++

static int pr = []() { 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();

class Solution {
public:
    bool isSame(TreeNode* s, TreeNode* t){
        if (s == nullptr && t == nullptr)
            return true;
        if (s == nullptr || t == nullptr)
            return false;
        if (s->val != t->val)
            return false;
        return isSame(s->left, t->left) && isSame(s->right, t->right);
    }

    bool isSubtree(TreeNode* s, TreeNode* t) {
        if (s == nullptr)
            return false;
        return isSame(s, t) || isSubtree(s->left, t) || isSubtree(s->right, t);
    }
};

```

## C# Solution

```csharp

public class Solution {
    bool IsSame(TreeNode s, TreeNode t){
        if (s == null && t == null)
            return true;
        if (s == null || t == null)
            return false;
        if (s.val != t.val)
            return false;
        return IsSame(s.left, t.left) && IsSame(s.right, t.right);
    }

    public bool IsSubtree(TreeNode s, TreeNode t) {
        if (s == null)
            return false;
        return IsSame(s, t) || IsSubtree(s.left, t) || IsSubtree(s.right, t);
    }
}

```

## Java Solution

```java

class Solution {
    public String treeSearilise(TreeNode node){
        if (node == null)
            return "N";
        return String.format("#%d#", node.val) + treeSearilise(node.left) + treeSearilise(node.right);
    }

    public boolean isSubtree(TreeNode s, TreeNode t) {
        return treeSearilise(s).contains(treeSearilise(t));
    }
}

```

## Python Solution

```python

class Solution:
    def isSame(self, s, t):
        if s is None and t is None:
            return True
        if s is None or t is None:
            return False
        if s.val != t.val:
            return False
        return self.isSame(s.left, t.left) and self.isSame(s.right, t.right)

    def isSubtree(self, s, t):
        """
        :type s: TreeNode
        :type t: TreeNode
        :rtype: bool
        """
        if s is None:
            return False 
        if self.isSame(s, t) == True:
            return True
        if self.isSubtree(s.left, t) == True:
            return True
        if self.isSubtree(s.right, t) == True:
            return True
        return False

```





