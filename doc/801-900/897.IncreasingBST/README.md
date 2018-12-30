
# problem 897 : IncreasingBST

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/897.IncreasingBST/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    TreeNode* ans;
    TreeNode* cur;

    void inorder(TreeNode* node){
        if (node == nullptr) {
            return;
        }
        inorder(node->left);
        node->left = nullptr;
        cur->right = node;
        cur = node;
        inorder(node->right);
    }

    TreeNode* increasingBST(TreeNode* root) {
        ans = new TreeNode(-1);
        cur = new TreeNode(-1);
        inorder(root);
        return ans->right;
    }
};

```

## C# Solution

```csharp

public class Solution {
    TreeNode ans;
    TreeNode cur;

    public void inorder(TreeNode node){
        if (node == null) {
            return;
        }
        inorder(node.left);
        node.left = null;
        cur.right = node;
        cur = node;
        inorder(node.right);
    }
    public TreeNode IncreasingBST(TreeNode root) {
        ans = new TreeNode(-1);
        cur = new TreeNode(-1);
        inorder(root);
        return ans.right;
    }
}

```

## Java Solution

```java

class Solution {

    TreeNode ans;
    TreeNode cur;

    public void inorder(TreeNode node){
        if (node == null) {
            return;
        }
        inorder(node.left);
        node.left = null;
        cur.right = node;
        cur = node;
        inorder(node.right);
    }

    public TreeNode increasingBST(TreeNode root) {
        ans = new TreeNode(-1);
        cur = new TreeNode(-1);
        inorder(root);
        return ans.right;
    }
}

```

## Python Solution

```python

class Solution: 
    def increasingBST(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        self.nodes = []
        def morder(node):
            if node is None:
                return 
            morder(node.left)
            self.nodes.append(node.val)
            morder(node.right)
        morder(root)
        root = TreeNode(-1)
        first = root
        for node in self.nodes:
            first.right = TreeNode(node)
            first = first.right
        return root.right

```





