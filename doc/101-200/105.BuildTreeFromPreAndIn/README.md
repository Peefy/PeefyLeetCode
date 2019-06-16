
# problem 105 : BuildTreeFromPreAndIn

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/105.BuildTreeFromPreAndIn/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        if (n == 0)
            return nullptr;
        unordered_map<int, int> idx;
        for (int i = 0; i < n; i++) {
            idx[inorder[i]] = i;
        }
        stack<TreeNode*> st;
        TreeNode* root = new TreeNode(preorder[0]);
        TreeNode* cur = root;
        for (int i = 1; i < n; i++) {
            st.push(cur);
            int val = preorder[i];
            if (idx[val] < idx[cur->val]){
                cur->left = new TreeNode(val);
                cur = cur->left;
            }
            else{
                while (st.size() > 0 && idx[val] > idx[st.top()->val]){
                    cur = st.top();
                    st.pop();
                }           
                cur->right = new TreeNode(val);
                cur = cur->right;
            }
        }
        return root;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public TreeNode BuildTree(int[] preorder, int[] inorder) {
        int n = preorder.Length;
        if (n == 0)
            return null;
        Dictionary<int, int> idx = new Dictionary<int, int>();
        for (int i = 0; i < n; i++) {
            idx.Add(inorder[i], i);
        }
        Stack<TreeNode> st = new Stack<TreeNode>();
        TreeNode root = new TreeNode(preorder[0]);
        TreeNode cur = root;
        for (int i = 1; i < n; i++) {
            st.Push(cur);
            int val = preorder[i];
            if (idx[val] < idx[cur.val]){
                cur.left = new TreeNode(val);
                cur = cur.left;
            }
            else{
                while (st.Count > 0 && idx[val] > idx[st.Peek().val]){
                    cur = st.Pop();
                }           
                cur.right = new TreeNode(val);
                cur = cur.right;
            }
        }
        return root;
    }
}

```

## Java Solution

```java

class Solution {
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        int n = preorder.length;
        if (n == 0)
            return null;
        HashMap<Integer, Integer> idx = new HashMap<>();
        for (int i = 0; i < n; i++) {
            idx.put(inorder[i], i);
        }
        LinkedList<TreeNode> st = new LinkedList<>();
        TreeNode root = new TreeNode(preorder[0]);
        TreeNode cur = root;
        for (int i = 1; i < n; i++) {
            st.add(cur);
            int val = preorder[i];
            if (idx.get(val) < idx.get(cur.val)){
                cur.left = new TreeNode(val);
                cur = cur.left;
            }
            else{
                while (st.size() > 0 && idx.get(val) > idx.get(st.getLast().val)){
                    cur = st.removeLast();
                }           
                cur.right = new TreeNode(val);
                cur = cur.right;
            }
        }
        return root;
    }
}

```

## Python Solution

```python

class Solution:
    def buildTree(self, pre: List[int], infix: List[int]) -> TreeNode:
        n = len(pre)
        if n == 0:
            return []
        idx = {val:i for i,val in enumerate(infix)}
        st = []
        cur = root = TreeNode(pre[0])
        for i in range(1,n):
            st.append(cur)
            val = pre[i]
            if idx[val] < idx[cur.val]:
                cur.left = TreeNode(val)
                cur = cur.left
            else:
                while st and idx[val] > idx[st[-1].val]:
                    cur = st.pop()
                cur.right = TreeNode(val)
                cur = cur.right
        return root

```


