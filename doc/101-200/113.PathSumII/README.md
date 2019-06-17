
# problem 113 : PathSumII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/113.PathSumII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    void dfs(TreeNode* node, vector<vector<int>>& ans, vector<int>& tmp, int s, int targetsum){
        tmp.push_back(node->val);
        targetsum += node->val;
        if (node->left == nullptr && node->right == nullptr){
            if (targetsum == s)
                ans.push_back(vector<int>(tmp));
            return;
        }
        if (node->left != nullptr){
            dfs(node->left, ans, tmp, s, targetsum);
            tmp.pop_back();
        }
        if (node->right != nullptr){
            dfs(node->right, ans, tmp, s, targetsum);
            tmp.pop_back();
        }
    }

    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        vector<int> tmp;
        dfs(root, ans, tmp, sum, 0);
        return ans;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public void dfs(TreeNode node, IList<IList<int>> ans, List<int> tmp, int s, int targetsum){
        tmp.Add(node.val);
        targetsum += node.val;
        if (node.left == null && node.right == null){
            if (targetsum == s)
                ans.Add(new List<int>(tmp));
            return;
        }
        if (node.left != null){
            dfs(node.left, ans, tmp, s, targetsum);
            tmp.RemoveAt(tmp.Count - 1);
        }
        if (node.right != null){
            dfs(node.right, ans, tmp, s, targetsum);
            tmp.RemoveAt(tmp.Count - 1);
        }
    }
    public IList<IList<int>> PathSum(TreeNode root, int sum) {
        IList<IList<int>> ans = new List<IList<int>>();
        if (root == null)
            return ans;
        List<int> tmp = new List<int>();
        dfs(root, ans, tmp, sum, 0);
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    public void dfs(TreeNode node, List<List<Integer>> ans, LinkedList<Integer> tmp, int s, int targetsum){
        tmp.add(node.val);
        targetsum += node.val;
        if (node.left == null && node.right == null){
            if (targetsum == s)
                ans.add(new LinkedList<>(tmp));
            return;
        }
        if (node.left != null){
            dfs(node.left, ans, tmp, s, targetsum);
            tmp.removeLast();
        }
        if (node.right != null){
            dfs(node.right, ans, tmp, s, targetsum);
            tmp.removeLast();
        }
    }

    public List<List<Integer>> pathSum(TreeNode root, int sum) {
        List<List<Integer>> ans = new LinkedList<>();
        if (root == null)
            return ans;
        LinkedList<Integer> tmp = new LinkedList<>();
        dfs(root, ans, tmp, sum, 0);
        return ans;
    }
}

```

## Python Solution

```python

class Solution:
    def dfs(self, node, ans, tmp, s):
        tmp.append(node.val)
        if node.left is None and node.right is None:
            if sum(tmp) == s:
                ans.append(tmp[:])
            return
        if node.left is not None:
            self.dfs(node.left, ans, tmp, s)
            tmp.pop()
        if node.right is not None:
            self.dfs(node.right, ans, tmp, s)
            tmp.pop()

    def pathSum(self, root: TreeNode, s: int) -> list:
        ans = []
        if root is None:
            return []
        self.dfs(root, ans, [], s)
        return ans

```


