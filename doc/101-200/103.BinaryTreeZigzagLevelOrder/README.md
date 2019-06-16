
# problem 103 : BinaryTreeZigzagLevelOrder

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/103.BinaryTreeZigzagLevelOrder/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        vector<TreeNode*> level;
        level.push_back(root);
        int order = 1;
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
            if (order == -1)
                reverse(cur.begin(), cur.end());
            ans.push_back(cur);
            level = next_level;
            order = -order;
        }
        return ans;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<IList<int>> ZigzagLevelOrder(TreeNode root) {
        IList<IList<int>> ans = new List<IList<int>>();
        if (root == null)
            return ans;
        List<TreeNode> level = new List<TreeNode>();
        level.Add(root);
        int order = 1;
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
            if (order == -1)
                cur.Reverse();
            ans.Add(cur);
            level = next_level;
            order = -order;
        }
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans = new LinkedList<>();
        if (root == null)
            return ans;
        LinkedList<TreeNode> level = new LinkedList<>();
        level.add(root);
        int order = 1;
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
            if (order == -1)
                Collections.reverse(cur);
            ans.add(cur);
            level = next_level;
            order = -order;
        }
        return ans;
    }
}

```

## Python Solution

```python

class Solution:
    def zigzagLevelOrder(self, root: TreeNode) -> list:
        if root is None:
            return []
        ans = []
        queue = [root]
        order = 1
        while len(queue) > 0:
            tmp = []
            nextqueue = []
            for node in queue:
                tmp.append(node.val)
                if node.left is not None:
                    nextqueue.append(node.left)
                if node.right is not None:
                    nextqueue.append(node.right)
            ans.append(tmp[::order])
            queue = nextqueue
            order = -order
        return ans

```


