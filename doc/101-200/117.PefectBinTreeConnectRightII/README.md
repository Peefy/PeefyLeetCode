
# problem 117 : PefectBinTreeConnectRightII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/117.PefectBinTreeConnectRightII/problem.png"/>

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

class Solution {
    public Node Connect(Node root) {
        if (root == null)
            return null;
        Node dummy = new Node(-1, null, null, null);
        Node pre = dummy;
        Node head = root;
        while (root != null) {
            if (root.left != null) {
                pre.next = root.left;
                pre = pre.next;
            }
            if (root.right != null) {
                pre.next = root.right;
                pre = pre.next;
            }
            root = root.next;
            if (root == null) {
                pre = dummy;
                root = dummy.next;
                dummy.next = null;
            }
        }
        return head;
    }
}

```

## Java Solution

```java

class Solution {
    public Node connect(Node root) {
        if (root == null)
            return null;
        Node dummy = new Node(-1, null, null, null);
        Node pre = dummy;
        Node head = root;
        while (root != null) {
            if (root.left != null) {
                pre.next = root.left;
                pre = pre.next;
            }
            if (root.right != null) {
                pre.next = root.right;
                pre = pre.next;
            }
            root = root.next;
            if (root == null) {
                pre = dummy;
                root = dummy.next;
                dummy.next = null;
            }
        }
        return head;
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


