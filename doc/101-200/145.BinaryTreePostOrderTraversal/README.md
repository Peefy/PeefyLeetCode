
# problem 145 : BinaryTreePostOrderTraversal


## C++ Solution

```c++

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) 
            return ans;   
        stack<TreeNode*> stackNode;
        stackNode.push(root);
        TreeNode* node;
        while (stackNode.size() > 0) {
            node = stackNode.top();
            stackNode.pop();
            ans.push_back(node->val);
            if (node->left != nullptr) {
                stackNode.push(node->left);
            }
            if (node->right != nullptr) {
                stackNode.push(node->right);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

```

## C# Solution

```csharp
 
public class Solution {
    public IList<int> PostorderTraversal(TreeNode root) {
        List<int> ans = new List<int>();
        if (root == null) 
            return ans;
        Stack <TreeNode> stack = new Stack<TreeNode>();
        stack.Push(root);
        TreeNode node;
        while (stack.Count > 0) {
            node = stack.Pop();
            ans.Insert(0, node.val);
            if (node.left != null) {
                stack.Push(node.left);
            }
            if (node.right != null) {
                stack.Push(node.right);
            }
        }
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> ans = new LinkedList<>();
        if (root == null) return ans;
        
        Stack <TreeNode> stack = new Stack<>();
        stack.push(root);
        TreeNode node;
        while (!stack.isEmpty()) {
            node = stack.pop();
            ans.add(0, node.val);
            if (node.left != null) {
                stack.push(node.left);
            }
            if (node.right != null) {
                stack.push(node.right);
            }
        }
        return ans;
    }
}

```

## Python Solution

```python

class Solution:
    def postorderTraversal(self, root: TreeNode):
        ans = []
        if root == None:
            return ans
        stack = []
        stack.append(root)
        while len(stack) > 0: 
            node = stack.pop()
            ans.insert(0, node.val)
            if node.left is not None:
                stack.append(node.left)
            if node.right is not None:
                stack.append(node.right)
        return ans

```


