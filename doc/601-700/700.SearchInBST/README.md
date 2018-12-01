
# problem 700 : Search In BST

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/700.SearchInBST/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(nullptr);             
    return 0;
}();

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == nullptr){
            return nullptr;
        }
        while (root != nullptr && root->val != val){
            if(root->val > val){
                root = root->left;
            }else if(root->val < val){
                root = root->right;
            }
        }
        return root;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public TreeNode SearchBST(TreeNode root, int val) {
        if (root == null)
            return null;
        if (val == root.val)
            return root;
        else if (val < root.val)
            return SearchBST(root.left, val);
        else
            return SearchBST(root.right, val);
    }
}

```

## Java Solution

```java

class Solution {
    public TreeNode searchBST(TreeNode root, int val) {
        if (root == null)
            return null;
        if (val == root.val)
            return root;
        else if (val < root.val)
            return searchBST(root.left, val);
        else
            return searchBST(root.right, val);
    }
}

```

## Python Solution

```python

class Solution:
    def searchBST(self, root, val):
        """
        :type root: TreeNode
        :type val: int
        :rtype: TreeNode
        """
        if root is None:
            return None
        if val == root.val:
            return root
        return self.searchBST(root.right, val) if val > root.val else self.searchBST(root.left, val)

```





