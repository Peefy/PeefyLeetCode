
# problem 872 : LeafSimilarTrees

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/872.LeafSimilarTrees/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    void order(TreeNode *node, vector<int>& list){
        if (node == nullptr)
            return;
        if (node->left == nullptr && node->right == nullptr){
            list.push_back(node->val);
            return;
        }
        order(node->left, list);
        order(node->right, list);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> list1;
        vector<int> list2;
        order(root1, list1);
        order(root2, list2);
        if (list1.size() != list2.size())
            return false;
        for(size_t i = 0; i < list1.size(); i++){
            if (list1[i] != list2[i])
                return false;
        }
        return true;
    }
};

```

## C# Solution

```csharp

public class Solution {
    private void order(TreeNode node, List<int> list){
        if (node == null)
            return;
        if (node.left == null && node.right == null){
            list.Add(node.val);
            return;
        }
        order(node.left, list);
        order(node.right, list);
    }
    public bool LeafSimilar(TreeNode root1, TreeNode root2) {
        List<int> list1 = new List<int>();
        List<int> list2 = new List<int>();
        order(root1, list1);
        order(root2, list2);
        if (list1.Count != list2.Count)
            return false;
        for(int i = 0; i < list1.Count; i++){
            if (list1[i] != list2[i])
                return false;
        }
        return true;
    }
}

```

## Java Solution

```java

class Solution {

    private void order(TreeNode node, LinkedList<Integer> list){
        if (node == null)
            return;
        if (node.left == null && node.right == null){
            list.add(node.val);
            return;
        }
        order(node.left, list);
        order(node.right, list);
    }

    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        LinkedList<Integer> list1 = new LinkedList<>();
        LinkedList<Integer> list2 = new LinkedList<>();
        order(root1, list1);
        order(root2, list2);
        if (list1.size() != list2.size())
            return false;
        for(int i = 0; i < list1.size(); i++){
            if (list1.get(i) != list2.get(i))
                return false;
        }
        return true;
    }
}

```

## Python Solution

```python

class Solution:
    def getlist(self, root):
        self.l = []
        def order(node):
            if node is None:
                return
            if node.left is None and node.right is None:
                self.l.append(node.val)
                return
            order(node.left)
            order(node.right)
        order(root)
        return self.l

    def leafSimilar(self, root1, root2):
        """
        :type root1: TreeNode
        :type root2: TreeNode
        :rtype: bool
        """
        return self.getlist(root1) == self.getlist(root2)

```





