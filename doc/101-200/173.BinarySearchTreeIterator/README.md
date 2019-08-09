
# problem 173 : BinarySearchTreeIterator

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/173.BinarySearchTreeIterator/problem.png"/>

## C++ Solution

```c++

class BSTIterator {
    stack<TreeNode*> tree_stack;
public:
    BSTIterator(TreeNode* root) {
        while(root){
            tree_stack.push(root);
            root = root->left;
        }
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode* cur = tree_stack.top();
        tree_stack.pop();
        int res = cur->val;
        cur = cur->right;
        while(cur){
            tree_stack.push(cur);
            cur = cur->left;
        }
        return res;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !tree_stack.empty();
    }
};

```

## C# Solution

```csharp

public class BSTIterator {
    private Stack <TreeNode> stack = new Stack<TreeNode>();
    public BSTIterator(TreeNode root) {
        if (root == null){
            return;
        }
        stack.Push(root);
        while (root.left != null){
            stack.Push(root.left);
            root = root.left;
        }
    }
    
    /** @return the next smallest number */
    public int Next() {
                TreeNode node = this.stack.Pop();
        if (node.right != null){
            this.stack.Push(node.right);
            TreeNode t = node.right;
            while (t.left != null){
                stack.Push(t.left);
                t = t.left;
            }
        }
        return node.val;
    }
    
    /** @return whether we have a next smallest number */
    public bool HasNext() {
        return this.stack.Count != 0;
    }
}

```

## Java Solution

```java

class BSTIterator {
    private LinkedList <TreeNode> stack = new LinkedList<TreeNode>();
    public BSTIterator(TreeNode root) {
        if (root == null){
            return;
        }
        stack.push(root);
        while (root.left != null){
            stack.push(root.left);
            root = root.left;
        }
    }

    /**
     * @return the next smallest number
     */
    public int next() {
        TreeNode node = this.stack.pop();
        if (node.right != null){
            this.stack.push(node.right);
            TreeNode t = node.right;
            while (t.left != null){
                stack.push(t.left);
                t = t.left;
            }
        }
        return node.val;
    }

    /**
     * @return whether we have a next smallest number
     */
    public boolean hasNext() {
        return !this.stack.isEmpty();
    }
}

```

## Python Solution

```python

class BSTIterator:

    stack = []

    def __init__(self, root: TreeNode):
        if root is None:
            return
        self.stack.append(root)
        while root.left is not None:
            self.stack.append(root.left)
            root = root.left


    def next(self) -> int:
        """
        @return the next smallest number
        """
        node = self.stack.pop()
        if node.right is not None:
            self.stack.append(node.right)
            t = node.right
            while t.left is not None:
                self.stack.append(t.left)
                t = t.left
        return node.val


    def hasNext(self) -> bool:
        """
        @return whether we have a next smallest number
        """
        return len(self.stack) != 0

```


