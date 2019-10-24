
# problem 285 : InorderSuccessorInBST

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/285.InorderSuccessorInBST/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    TreeNode *inorderSuccessor(TreeNode *root, TreeNode *p) {
        cur = root;
        pre = NULL;
        while (cur != NULL || !s.empty()) {
            while (cur != NULL) {
                s.push(cur);
                cur = cur->left;
            }
            if (s.size() > 0) {
                cur = s.top();
                if (pre == p)
                    return cur;
                s.pop();
                pre = cur;
                cur = cur->right;
            }
        }
        return NULL;
    }

private:
    TreeNode *cur;
    TreeNode *pre;
    stack<TreeNode *> s;
};

```

## C# Solution

```csharp

public class Solution {
    public TreeNode InorderSuccessor(TreeNode root, TreeNode p) {
        TreeNode cur = root;
        TreeNode pre = null;
        Stack<TreeNode> s = new Stack<TreeNode>();
        while (cur != null || s.Count > 0) {
            while (cur != null) {
                s.Push(cur);
                cur = cur.left;
            }
            if (s.Count > 0) {
                cur = s.Peek();
                if (pre == p)
                    return cur;
                s.Pop();
                pre = cur;
                cur = cur.right;
            }
        }
        return null;
    }
}

```

## Java Solution

```java

class Solution {
    public TreeNode inorderSuccessor(TreeNode root, TreeNode p) {
        TreeNode cur = root;
        TreeNode pre = null;
        LinkedList<TreeNode> s = new LinkedList<>();
        while (cur != null || !s.isEmpty()) {
            while (cur != null) {
                s.push(cur);
                cur = cur.left;
            }
            if (s.size() > 0) {
                cur = s.getLast();
                if (pre == p)
                    return cur;
                s.removeLast();
                pre = cur;
                cur = cur.right;
            }
        }
        return null;
    }
}

```

## Python Solution

```python

class Solution:
    def inorderSuccessor(self, root, p):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        cur = root
        pre = None
        s = []
        while cur is not None or len(s) > 0:
            while cur is not None:
                s.append(cur)
                cur = cur.left
            if len(s) > 0:
                cur = s[-1]
                if pre == p:
                    return cur
                s.pop()
                pre = cur
                cur = cur.right
        return None     

```




