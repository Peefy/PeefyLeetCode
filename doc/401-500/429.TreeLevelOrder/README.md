
# problem 429 : TreeLevelOrder

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/429.TreeLevelOrder/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int> > r;
        queue<Node* > q;
        if (root == nullptr)
            return r;
        q.push(root);
        while (q.size() != 0) {
            vector<int> child;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                auto node = q.front();
                q.pop();
                child.push_back(node->val);
                for(Node* nn : node->children){
                    q.push(nn);
                }
            }
            r.push_back(child);
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<IList<int>> LevelOrder(Node root) {
        List<IList<int>> r = new List<IList<int>>();
        Queue<Node> q = new Queue<Node>();
        if (root == null)
            return r;
        q.Enqueue(root);
        while (q.Count != 0) {
            List<int> child = new List<int>();
            int n = q.Count;
            for (int i = 0; i < n; i++) {
                Node node = q.Dequeue();
                child.Add(node.val);
                foreach (Node nn in node.children){
                    q.Enqueue(nn);
                }
            }
            r.Add(child);
        }
        return r;
    }
}

```

## Java Solution

```java

import java.util.concurrent.LinkedBlockingQueue;

class Solution {
    public List<List<Integer>> levelOrder(Node root) {
        LinkedList<List<Integer>> r = new LinkedList<List<Integer>>();
        LinkedBlockingQueue<Node> q = new LinkedBlockingQueue<>();
        if (root == null)
            return r;
        q.add(root);
        while (q.isEmpty() == false) {
            LinkedList<Integer> child = new LinkedList<>();
            int n = q.size();
            for (int i = 0; i < n; i++) {
                Node node = q.poll();
                child.add(node.val);
                for(Node nn : node.children){
                    q.add(nn);
                }
            }
            r.add(child);
        }
        return r;
    }
}

```

## Python Solution

```python

class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Node
        :rtype: List[List[int]]
        """
        r = []
        if root is None:
            return r
        stack = []
        stack.append(root)
        while len(stack) != 0:
            child = []
            n = len(stack)
            for i in range(n):
                node = stack.pop(0)
                child.append(node.val)
                if node.children is not None:
                    for c in node.children:
                        stack.append(c)
            r.append(child)
        return r

```





