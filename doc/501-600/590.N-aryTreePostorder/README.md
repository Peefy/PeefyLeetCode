
# problem 590 : N-aryTreePostorder

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/590.N-aryTreePostorder/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<int> list;
    void trans(Node* node){
        if (node == nullptr) {
            return;
        }
        for(auto node : node->children)
        {
            trans(node);
        }
        list.push_back(node->val);
    }

    vector<int> postorder(Node* root) {
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

        public IList<int> Posteorder(Node root)
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
    public List<Integer> postorder(Node root) {
        LinkedList<Integer> list = new LinkedList<>();
        if (root == null) {
            return list;
        }
        for (Node node : root.children) {
            list.addAll(preorder(node));
        }
        list.add(root.val);
        return list;
    }
}

```

## Python Solution

```python

class Solution(object):
    def trace(self, node, nodelist):
        if node is None:
            return
        for n in node.children:
            self.trace(n, nodelist)
        nodelist.append(node.val)

    def postorder(self, root):
        """
        :type root: Node
        :rtype: List[int]
        """
        nodelist = []
        self.trace(root, nodelist)
        return nodelist

```





