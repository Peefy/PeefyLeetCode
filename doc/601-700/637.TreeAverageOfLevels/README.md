
# problem 637 : TreeAverageOfLevels

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/637.TreeAverageOfLevels/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> r;
        if (root == nullptr)
            return r;
        queue<TreeNode*> q;
        q.push(root);
        while (q.size() > 0){
            double sum = 0;
            double l = q.size();
            for (int i = 0; i < l; ++i){
                auto node = q.front();
                q.pop();
                sum += node->val;
                if (node->left != nullptr)
                    q.push(node->left);
                if (node->right != nullptr)
                    q.push(node->right);
            }
            r.push_back(sum / l);
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<double> AverageOfLevels(TreeNode root) {
        var r = new List<double>();
        if (root == null)
            return r;
        var q = new Queue<TreeNode>();
        q.Enqueue(root);
        while (q.Count > 0){
            double sum = 0;
            double l = q.Count;
            for (int i = 0; i < l; ++i){
                var node = q.Dequeue();
                sum += node.val;
                if (node.left != null)
                    q.Enqueue(node.left);
                if (node.right != null)
                    q.Enqueue(node.right);
            }
            r.Add(sum / l);
        }
        return r;
    }
}

```

## Java Solution

```java

class Solution {
    public List<Double> averageOfLevels(TreeNode root) {
        LinkedList<Double> r = new LinkedList<>();
        if (root == null)
            return r;
        LinkedList<TreeNode> q = new LinkedList<>();
        q.add(root);
        while (q.size() > 0){
            double sum = 0;
            LinkedList<TreeNode> newq = new LinkedList<>();
            double l = q.size();
            for (TreeNode node : q){
                sum += node.val;
                if (node.left != null)
                    newq.add(node.left);
                if (node.right != null)
                    newq.add(node.right);
            }
            r.add(sum / l);
            q = newq;
        }
        return r;
    }
}

```

## Python Solution

```python

class Solution:
    def averageOfLevels(self, root):
        """
        :type root: TreeNode
        :rtype: List[float]
        """
        r = []
        if root is None:
            return r
        q = [root]
        while len(q) > 0:
            sum = 0
            newq = []
            l = len(q)
            for node in q:
                sum += node.val
                if node.left is not None:
                    newq.append(node.left)
                if node.right is not None:
                    newq.append(node.right)
            r.append(sum / l)
            q = newq
        return r

```





