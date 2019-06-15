
# Problem 94 : BinaryTreeInorderTraversal

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/94.BinaryTreeInorderTraversal/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == nullptr)
            return res;
        vector<bool> stackVisited;
        vector<TreeNode*> stackNode;
        stackVisited.push_back(false);
        stackNode.push_back(root);
        while (stackNode.size() > 0){
            TreeNode* cur_root = stackNode.back();
            stackNode.pop_back();
            bool vis = stackVisited.back();
            stackVisited.pop_back();
            if (vis == true)
                res.push_back(cur_root->val);                
            else{
                if (cur_root->right != nullptr){
                    stackNode.push_back(cur_root->right);
                    stackVisited.push_back(false);
                }          
                stackNode.push_back(cur_root);
                stackVisited.push_back(true);
                if (cur_root->left != nullptr){
                    stackNode.push_back(cur_root->left);
                    stackVisited.push_back(false);
                }             
            }        
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<int> InorderTraversal(TreeNode root) {
        List<int> res = new List<int>();
        if (root == null)
            return res;
        Stack<Boolean> stackVisited = new Stack<bool>();
        Stack<TreeNode> stackNode = new Stack<TreeNode>();
        stackVisited.Push(false);
        stackNode.Push(root);
        while (stackNode.Count > 0){
            TreeNode cur_root = stackNode.Pop();
            bool vis = stackVisited.Pop();
            if (vis == true)
                res.Add(cur_root.val);                
            else{
                if (cur_root.right != null){
                    stackNode.Push(cur_root.right);
                    stackVisited.Push(false);
                }          
                stackNode.Push(cur_root);
                stackVisited.Push(true);
                if (cur_root.left != null){
                    stackNode.Push(cur_root.left);
                    stackVisited.Push(false);
                }             
            }        
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> res = new ArrayList<>();
        if (root == null)
            return res;
        LinkedList<Boolean> stackVisited = new LinkedList<>();
        LinkedList<TreeNode> stackNode = new LinkedList<>();
        stackVisited.add(false);
        stackNode.add(root);
        while (stackNode.size() > 0){
            TreeNode cur_root = stackNode.removeLast();
            boolean vis = stackVisited.removeLast();
            if (vis == true)
                res.add(cur_root.val);                
            else{
                if (cur_root.right != null){
                    stackNode.add(cur_root.right);
                    stackVisited.add(false);
                }          
                stackNode.add(cur_root);
                stackVisited.add(true);
                if (cur_root.left != null){
                    stackNode.add(cur_root.left);
                    stackVisited.add(false);
                }             
            }        
        }
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def inorder(self, node, ans):
        if node is None:
            return
        self.inorder(node.left, ans)
        ans.append(node.val)
        self.inorder(node.right, ans)

    def inorderTraversal(self, root: TreeNode) -> list:
        ans = []
        self.inorder(root, ans)
        return ans

```


