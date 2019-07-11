
# problem 144 : BinaryTreePreorderTraversal

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/144.BinaryTreePreorderTraversal/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<TreeNode*> stack;
        vector<int> output;
        if (root == nullptr) {
            return output;
        }

        stack.push_back(root);
        while (stack.size() != 0) {
            TreeNode* node = stack.back();
            stack.pop_back();
            output.push_back(node->val);
            if (node->right != nullptr) {
                stack.push_back(node->right);
            }
            if (node->left != nullptr) {
                stack.push_back(node->left);
            }
        }
        return output;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<int> PreorderTraversal(TreeNode root) {
        Stack<TreeNode> stack = new Stack<TreeNode>();
        List<int> output = new List<int>();
        if (root == null) {
            return output;
        }

        stack.Push(root);
        while (!(stack.Count == 0)) {
            TreeNode node = stack.Pop();
            output.Add(node.val);
            if (node.right != null) {
                stack.Push(node.right);
            }
            if (node.left != null) {
                stack.Push(node.left);
            }
        }
        return output;
    }
}

```

## Java Solution

```java

class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        LinkedList<TreeNode> stack = new LinkedList<>();
        LinkedList<Integer> output = new LinkedList<>();
        if (root == null) {
            return output;
        }

        stack.add(root);
        while (!stack.isEmpty()) {
            TreeNode node = stack.pollLast();
            output.add(node.val);
            if (node.right != null) {
                stack.add(node.right);
            }
            if (node.left != null) {
                stack.add(node.left);
            }
        }
        return output;
    }
}

```

## Python Solution

```python

class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if root is None:
            return []   
        stack, output = [root, ], []
        while stack:
            root = stack.pop()
            if root is not None:
                output.append(root.val)
                if root.right is not None:
                    stack.append(root.right)
                if root.left is not None:
                    stack.append(root.left)
        return output

```


