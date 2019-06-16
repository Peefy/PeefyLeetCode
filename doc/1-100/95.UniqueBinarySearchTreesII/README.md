
# Problem 95 : UniqueBinarySearchTreesII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/95.UniqueBinarySearchTreesII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if (n == 0)
            return vector<TreeNode*>{};
        return helper(1,n);
    }
    vector<TreeNode*> helper(int begin, int end)
    {
        vector<TreeNode*> res;
        if (begin > end)
        {
            res.push_back(NULL);
            return res;
        }
        for (int i = begin; i <= end; ++i)
        {
            vector<TreeNode*> left_trees = helper(begin, i-1);
            vector<TreeNode*> right_trees = helper(i+1, end);
            for (auto l : left_trees)
            {
                for (auto r : right_trees)
                {
                    TreeNode* root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    res.push_back(root);
                }
            }

        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<TreeNode> GenerateTrees(int n) {
        if(n == 0)
            return new List<TreeNode>();
        return generateTrees(1, n);
    }
    public IList<TreeNode> generateTrees(int start, int end) {
        List<TreeNode> res = new List<TreeNode>();
        if(start > end){
            res.Add(null);
            return res;
        }
        for(int i = start;i <= end;i++){
            IList<TreeNode> subLeftTree = generateTrees(start,i-1);
            IList<TreeNode> subRightTree = generateTrees(i+1,end);
            foreach(TreeNode left in subLeftTree){
                foreach(TreeNode right in subRightTree){
                    TreeNode node = new TreeNode(i);
                    node.left = left;
                    node.right = right;
                    res.Add(node);
                }
            }                        
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public List<TreeNode> generateTrees(int n) {
        if(n == 0)
            return new LinkedList<TreeNode>();
        return generateTrees(1,n);
    }
    public List<TreeNode> generateTrees(int start,int end) {
        List<TreeNode> res = new LinkedList<TreeNode>();
        if(start > end){
            res.add(null);
            return res;
        }
        for(int i = start;i <= end;i++){
            List<TreeNode> subLeftTree = generateTrees(start,i-1);
            List<TreeNode> subRightTree = generateTrees(i+1,end);
            for(TreeNode left : subLeftTree){
                for(TreeNode right : subRightTree){
                    TreeNode node = new TreeNode(i);
                    node.left = left;
                    node.right = right;
                    res.add(node);
                }
            }                        
        }
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def generateTrees(self, n):
        def helper(tree):
            # tree 为有序数组
            ans = []
            # 遍历可能的根结点
            for i, val in enumerate(tree):
                # left、right 分别为左右子树包含的结点
                left, right = tree[:i], tree[i+1:]
                # 若左子树为 NULL，则令其为 [None]
                for ltree in helper(left) or [None]:
                    # 若右子树为 NULL，则令其为 [None]
                    for rtree in helper(right) or [None]:
                        root = TreeNode(val)
                        root.left, root.right = ltree, rtree
                        ans.append(root)
            return ans
        return helper(range(1, n + 1))

```


