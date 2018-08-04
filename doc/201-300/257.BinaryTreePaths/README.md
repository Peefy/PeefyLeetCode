
# problem 257 : BinaryTreePaths

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/257.BinaryTreePaths/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> l;
        string to = "->";
        if (root == nullptr) {
            return l;
        }
        if (root->left == nullptr && root->right == nullptr){
            l.push_back(to_string(root->val)); 
            return l;
        }
        auto ll = binaryTreePaths(root->left);
        auto lr = binaryTreePaths(root->right);
        for (string ss : ll){  
            l.push_back(to_string(root->val) + to + ss);
        }
        for (string ss : lr){
            l.push_back(to_string(root->val) + to + ss);
        }
        return l;
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

public class Solution {
    public IList<string> BinaryTreePaths(TreeNode root) {
        var tostr = "->";
        List<string> l = new List<string>();
        if (root == null) {
            return l;
        }
        if (root.left == null && root.right == null){
            l.Add(root.val.ToString());
            return l;
        }
        var ll = BinaryTreePaths(root.left);
        var lr = BinaryTreePaths(root.right);
        for (int i = 0; i < ll.Count; i++)
        {
            l.Add(root.val.ToString() + tostr + ll[i]);
        }
        for (int i = 0; i < lr.Count; i++)
        {
            l.Add(root.val.ToString() + tostr + lr[i]);
        }
        return l;
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
    public List<String> binaryTreePaths(TreeNode root) {
        String to = "->";
        LinkedList<String> l = new LinkedList<>();
        if (root == null) {
            return l;
        }
        if (root.left == null && root.right == null){
            l.add(new Integer(root.val).toString());
            return l;
        }
        List<String> ll = binaryTreePaths(root.left);
        List<String> lr = binaryTreePaths(root.right);
        for (String s : ll){
            l.add(new Integer(root.val).toString() + to + s);
        }
        for (String s : lr){
            l.add(new Integer(root.val).toString() + to + s);
        }
        return l;
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
    def binaryTreePaths(self, root):
        """
        :type root: TreeNode
        :rtype: List[str]
        """
        paths = []
        stack = []
        to = '->'
        if root is None:
            return paths
        stack.append(root)
        paths.append(str(root.val))
        paths_r = []
        while len(stack) != 0:
            node = stack.pop(0)
            path = paths.pop(0)
            if node.left is not None:
                stack.append(node.left)
                paths.append(path + to + str(node.left.val))
            if node.right is not None:
                stack.append(node.right)
                paths.append(path + to + str(node.right.val))
            if node.left is None and node.right is None:
                paths_r.append(path)
        return paths_r

```




