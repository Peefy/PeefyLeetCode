
# problem 108 : SortedArrayToBST

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/108.SortedArrayToBST/problem.png"/>

## C++ Solution

```c++

    class Solution
    {
      public:
        int maxDepth(TreeNode *root)
        {
            if (root == NULL)
                return 0;
            int left = maxDepth(root->left);
            int right = maxDepth(root->right);
            int max = left > right ? left : right;
            return max + 1;
        }

        vector<vector<int>> levelOrderBottom(TreeNode *root)
        {
            vector<vector<int>> result;
            if (root == NULL)
                return result;
            int depth = maxDepth(root);
            for(int i = 0;i < depth;++i)
            {
                vector<int> tmp;
                result.push_back(tmp);
            }
            --depth;
            queue<TreeNode> s;
            s.push(*root);
            while (s.size() > 0 && depth >= 0)
            {
                auto n = s.size();
                for (int i = 0;i < n;++i)
                {
                    TreeNode node = s.front();
                    s.pop();
                    result[depth].push_back(node.val);
                    if (node.left != NULL)
                        s.push(*node.left);
                    if (node.right != NULL)
                        s.push(*node.right);
                }
                --depth;
            }
            return result;
        }
    };


```

## C# Solution

```csharp
public class TreeNode
{
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int x) { val = x; }
}
    public class Solution
    {
        public int MaxDepth(TreeNode root)
        {
            return root == null ? 0 :
                System.Math.Max(MaxDepth(root.left), MaxDepth(root.right)) + 1;
        }

        public IList<IList<int>> LevelOrderBottom(TreeNode root)
        {
            List<IList<int>> result = new List<IList<int>>();
            if (root == null)
                return result;
            int n = this.MaxDepth(root);
            for (int i = 0; i < n; i++)
            {
                result.Add(new List<int>());
            }
            --n;
            Queue<TreeNode> queue = new Queue<TreeNode>();
            queue.Enqueue(root);
            while (queue.Count > 0 && n >= 0)
            {
                int count = queue.Count;
                for (int i = 0; i < count; i++)
                {
                    TreeNode node = queue.Dequeue();
                    result[n].Add(node.val);
                    if (node.left != null)
                        queue.Enqueue(node.left);
                    if (node.right != null)
                        queue.Enqueue(node.right);
                }
                --n;
            }
            return result;
        }

    }
```

## Java Solution

```java
public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        val = x;
    }
}
class Solution {
    public int maxDepth(TreeNode root) {
        return root == null ? 0 : Math.max(maxDepth(root.left), maxDepth(root.right)) + 1;
    }

    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        ArrayList<List<Integer>> result = new ArrayList<List<Integer>>();
        if (root == null)
                return result;
            int n = this.maxDepth(root);
            for (int i = 0; i < n; i++)
            {
                result.add(new ArrayList<Integer>());
            }
            --n;
            ArrayList<TreeNode> queue = new ArrayList<TreeNode>();
            queue.add(root);
            while (queue.isEmpty() == false && n >= 0)
            {
                int count = queue.size();
                for (int i = 0; i < count; i++)
                {
                    TreeNode node = queue.get(0);
                    queue.remove(0);
                    result.get(n).add(node.val);
                    if (node.left != null)
                        queue.add(node.left);
                    if (node.right != null)
                        queue.add(node.right);
                }
                --n;
            }
            return result;
    }
}

```

## Python Solution

```python
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    list = []
    index = -1
    def getdepth(self, node):
        if node is None:
            return 0
        return max(self.getdepth(node.left), self.getdepth(node.right)) + 1

    def lowerOrderAdd(self, root , n):
        self.index += 1
        if root is None:
            return
        if self.index >= 0:
            self.list[n - self.index - 1].append(root.val)
        self.lowerOrderAdd(root.left, n)
        self.index -= 1
        self.lowerOrderAdd(root.right, n)
        self.index -= 1

```


