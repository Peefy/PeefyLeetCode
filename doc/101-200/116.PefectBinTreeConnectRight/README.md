
# problem 116 : PefectBinTreeConnectRight

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/116.PefectBinTreeConnectRight/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr)
            return nullptr;
        vector<Node*> stack;
        stack.push_back(root);
        while (stack.size() > 0){
            vector<Node*> tmp;
            Node* lastnode = nullptr;
            for (Node* node : stack){
                node->next = lastnode;
                lastnode = node;
                if (node->right != nullptr)
                    tmp.push_back(node->right);
                if (node->left != nullptr)
                    tmp.push_back(node->left);
            }
            stack = tmp;
        }
        return root;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public Node Connect(Node root) {
        if (root == null)
            return null;
        List<Node> stack = new List<Node>();
        stack.Add(root);
        while (stack.Count > 0){
            List<Node> tmp = new List<Node>();
            Node lastnode = null;
            foreach (Node node in stack){
                node.next = lastnode;
                lastnode = node;
                if (node.right != null)
                    tmp.Add(node.right);
                if (node.left != null)
                    tmp.Add(node.left);
            }
            stack = tmp;
        }
        return root;
    }
}

```

## Java Solution

```java

class Solution {
    public Node connect(Node root) {
        if (root == null)
            return null;
        List<Node> stack = new ArrayList<>();
        stack.add(root);
        while (stack.size() > 0){
            List<Node> tmp = new ArrayList<>();
            Node lastnode = null;
            for (Node node : stack){
                node.next = lastnode;
                lastnode = node;
                if (node.right != null)
                    tmp.add(node.right);
                if (node.left != null)
                    tmp.add(node.left);
            }
            stack = tmp;
        }
        return root;
    }
}

```

## Python Solution

```python

class Solution:
    def connect(self, root):
        if root is None:
            return root
        stack = [root]
        while len(stack) > 0:
            tmp = []
            lastnode = None
            for i in range(len(stack)):
                node = stack[i]
                node.next = lastnode
                lastnode = stack[i]
                if node.right is not None:
                    tmp.append(node.right)
                if node.left is not None:
                    tmp.append(node.left)
            stack = tmp
        return root

```


