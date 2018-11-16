
# problem 589 : N-aryTreePreorder

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/589.N-aryTreePreorder/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<int> list;
    void trans(Node* node){
        if (node == nullptr) {
            return;
        }
        list.push_back(node->val);
        for(auto node : node->children)
        {
            trans(node);
        }
    }

    vector<int> preorder(Node* root) {
        list.clear();
        trans(root);
        return list;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        List<int> list;

        void Trace(Node node)
        {
            if (node == null)
                return;
            list.Add(node.val);
            foreach (var n in node.children)
            {
                Trace(n);
            }
        }

        public IList<int> Preorder(Node root)
        {
            list = new List<int>();
            Trace(root);
            return list;
        }
    }

```

## Java Solution

```java

class Solution {
    public List<Integer> preorder(Node root) {
        LinkedList<Integer> list = new LinkedList<>();
        if (root == null) {
            return list;
        }
        list.add(root.val);
        for (Node node : root.children) {
            list.addAll(preorder(node));
        }
        return list;
    }
}

```

## Python Solution

```python

class Solution(object):
    def preorder(self, root):
        """
        :type root: Node
        :rtype: List[int]
        """
        if root is None:
            return []
        nodelist = []
        nodelist.append(root.val)
        for node in root.children:
            nodelist += self.preorder(node)
        return nodelist

```





