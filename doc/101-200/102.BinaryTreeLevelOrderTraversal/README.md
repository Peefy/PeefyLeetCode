
# problem 102 : BinaryTreeLevelOrderTraversal

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/102.BinaryTreeLevelOrderTraversal/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        vector<TreeNode*> level;
        level.push_back(root);
        while (level.size() > 0){
            vector<int> cur;
            vector<TreeNode*> next_level;
            for (TreeNode* node : level) {
                cur.push_back(node->val);
                if (node->left != nullptr)
                    next_level.push_back(node->left);
                if (node->right != nullptr)
                    next_level.push_back(node->right);
            }
            ans.push_back(cur);
            level = next_level;
        }
        return ans;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<IList<int>> LevelOrder(TreeNode root) {
        IList<IList<int>> ans = new List<IList<int>>();
        if (root == null)
            return ans;
        List<TreeNode> level = new List<TreeNode>();
        level.Add(root);
        while (level.Count > 0){
            List<int> cur = new List<int>();
            List<TreeNode> next_level = new List<TreeNode>();
            foreach (TreeNode node in level) {
                cur.Add(node.val);
                if (node.left != null)
                    next_level.Add(node.left);
                if (node.right != null)
                    next_level.Add(node.right);
            }
            ans.Add(cur);
            level = next_level;
        }
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> ans = new LinkedList<>();
        if (root == null)
            return ans;
        LinkedList<TreeNode> level = new LinkedList<>();
        level.add(root);
        while (level.size() > 0){
            List<Integer> cur = new LinkedList<>();
            LinkedList<TreeNode> next_level = new LinkedList<>();
            for (TreeNode node : level) {
                cur.add(node.val);
                if (node.left != null)
                    next_level.add(node.left);
                if (node.right != null)
                    next_level.add(node.right);
            }
            ans.add(cur);
            level = next_level;
        }
        return ans;
    }
}

```

## Python Solution

```python

class Solution:
    def levelOrder(self, root: TreeNode) -> list:
        if root is None:
            return []
        ans = []
        tmp = []
        queue = [root]
        nextqueue = []
        while len(queue) > 0:
            node = queue.pop(0)
            tmp.append(node.val)
            if node.left is not None:
                nextqueue.append(node.left)
            if node.right is not None:
                nextqueue.append(node.right)
            if len(queue) == 0:
                ans.append(tmp[:])
                tmp.clear()
                queue = nextqueue[:]
                nextqueue.clear()
        return ans

```


