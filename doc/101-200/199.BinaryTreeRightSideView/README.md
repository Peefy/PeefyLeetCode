
# problem 194 : TransposeFile

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/194.TransposeFile/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        helper(root,0,res);
        return res;        
    }
    void helper(TreeNode* root,int level,vector<int>& res){
        if(!root) return;
        if(res.size()==level) res.push_back(root->val);
        helper(root->right,level+1,res);
        helper(root->left,level+1,res);
    }
};

```

## C# Solution

```csharp


    public class Solution
    {
        void helper(TreeNode root, int level, List<int> res)
        {
            if (root == null) 
                return;
            if (res.Count == level) 
                res.Add(root.val);
            helper(root.right, level + 1, res);
            helper(root.left, level + 1, res);
        }
        public IList<int> RightSideView(TreeNode root)
        {
            List<int> res = new List<int>();
            helper(root, 0, res);
            return res;
        }
    }

```

## Java Solution

```java

class Solution {
    public List<Integer> rightSideView(TreeNode root) {
        Map<Integer, Integer> rightmostValueAtDepth = new HashMap<Integer, Integer>();
        int max_depth = -1;
        Stack<TreeNode> nodeStack = new Stack<TreeNode>();
        Stack<Integer> depthStack = new Stack<Integer>();
        nodeStack.push(root);
        depthStack.push(0);
        while (!nodeStack.isEmpty()) {
            TreeNode node = nodeStack.pop();
            int depth = depthStack.pop();
            if (node != null) {
                max_depth = Math.max(max_depth, depth);
                if (!rightmostValueAtDepth.containsKey(depth)) {
                    rightmostValueAtDepth.put(depth, node.val);
                }

                nodeStack.push(node.left);
                nodeStack.push(node.right);
                depthStack.push(depth+1);
                depthStack.push(depth+1);
            }
        }
        List<Integer> rightView = new ArrayList<Integer>();
        for (int depth = 0; depth <= max_depth; depth++) {
            rightView.add(rightmostValueAtDepth.get(depth));
        }
        return rightView;
    }
}

```

## Python Solution

```python

class Solution(object):
    def rightSideView(self, root):
        rightmost_value_at_depth = dict() 
        max_depth = -1
        stack = [(root, 0)]
        while stack:
            node, depth = stack.pop()
            if node is not None:
                max_depth = max(max_depth, depth)
                rightmost_value_at_depth.setdefault(depth, node.val)
                stack.append((node.left, depth+1))
                stack.append((node.right, depth+1))
        return [rightmost_value_at_depth[depth] for depth in range(max_depth+1)]

```


