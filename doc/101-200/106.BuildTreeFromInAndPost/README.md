
# problem 106 : BuildTreeFromInAndPost

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/106.BuildTreeFromInAndPost/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();
        if (n == 0)
            return nullptr;
        unordered_map<int, int> idx;
        for (int i = 0; i < n; i++) {
            idx[inorder[i]] = i;
        }
        stack<TreeNode*> st;
        TreeNode* root = new TreeNode(postorder[n - 1]);
        TreeNode* cur = root;
        for (int i = n - 2; i >= 0; i--) {
            st.push(cur);
            int val = postorder[i];
            if (idx[val] > idx[cur->val]){
                cur->right = new TreeNode(val);
                cur = cur->right;
            }
            else{
                while (st.size() > 0 && idx[val] < idx[st.top()->val]){
                    cur = st.top();
                    st.pop();
                }           
                cur->left = new TreeNode(val);
                cur = cur->left;
            }
        }
        return root;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public TreeNode BuildTree(int[] inorder, int[] postorder) {
        int n = postorder.Length;
        if (n == 0)
            return null;
        Dictionary<int, int> idx = new Dictionary<int, int>();
        for (int i = 0; i < n; i++) {
            idx.Add(inorder[i], i);
        }
        Stack<TreeNode> st = new Stack<TreeNode>();
        TreeNode root = new TreeNode(postorder[n - 1]);
        TreeNode cur = root;
        for (int i = n - 2; i >= 0; i--) {
            st.Push(cur);
            int val = postorder[i];
            if (idx[val] > idx[cur.val]){
                cur.right = new TreeNode(val);
                cur = cur.right;
            }
            else{
                while (st.Count > 0 && idx[val] < idx[st.Peek().val]){
                    cur = st.Pop();
                }           
                cur.left = new TreeNode(val);
                cur = cur.left;
            }
        }
        return root;
    }
}

```

## Java Solution

```java

class Solution {
    public TreeNode buildTree(int[] inorder, int[] postorder) {
        int n = postorder.length;
        if (n == 0)
            return null;
        HashMap<Integer, Integer> idx = new HashMap<>();
        for (int i = 0; i < n; i++) {
            idx.put(inorder[i], i);
        }
        LinkedList<TreeNode> st = new LinkedList<>();
        TreeNode root = new TreeNode(postorder[n - 1]);
        TreeNode cur = root;
        for (int i = n - 2; i >= 0; i--) {
            st.add(cur);
            int val = postorder[i];
            if (idx.get(val) > idx.get(cur.val)){
                cur.right = new TreeNode(val);
                cur = cur.right;
            }
            else{
                while (st.size() > 0 && idx.get(val) < idx.get(st.getLast().val)){
                    cur = st.removeLast();
                }           
                cur.left = new TreeNode(val);
                cur = cur.left;
            }
        }
        return root;
    }
}

```

## Python Solution

```python

    def buildTree(self, infix, pre) -> TreeNode:
        n = len(pre)
        if n == 0:
            return []
        idx = {val:i for i,val in enumerate(infix)}
        st = []
        cur = root = TreeNode(pre[-1])
        for i in range(-2, -(n + 1), -1):
            st.append(cur)
            val = pre[i]
            if idx[val] > idx[cur.val]:
                cur.right = TreeNode(val)
                cur = cur.right
            else:
                while st and idx[val] < idx[st[-1].val]:
                    cur = st.pop()
                cur.left = TreeNode(val)
                cur = cur.left
        return root

```


