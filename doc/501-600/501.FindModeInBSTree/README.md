
# problem 501 : FindModeInBSTree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/501.FindModeInBSTree/problem.png"/>

## 二叉搜索树的中序遍历是有序列表

## C++ Solution

```c++

class Solution {
public:
    void bst2sortlist(TreeNode* root, vector<int> & list){
        if (root == nullptr)
            return;
        bst2sortlist(root->left, list);
        list.push_back(root->val);
        bst2sortlist(root->right, list);
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> r;    
        if (root == nullptr) {
            return r;
        }
        vector<int> list;
        map<int, int> counter;
        bst2sortlist(root, list);
        for(auto val : list){
            counter[val]++; 
        }
        auto max = INT32_MIN;     
        for(auto i = counter.begin(); i != counter.end(); i++)
        {
            auto ele = *i;
            if (ele.second > max)
                max = ele.second;
        }
        for(auto i = counter.begin(); i != counter.end(); i++)
        {
            auto ele = *i;
            if (ele.second == max)
                r.push_back(ele.first);
        }
        return r;
    }
};

```

## C# Solution

```csharp

public class Solution 
{
    List<int> res = new List<int>();
    bool first;
    int val;
    int c;
    int max = -int.MaxValue;
    void InOrder(TreeNode root){
        if(root == null)
            return;
        InOrder(root.left);
        TreeNode cur = root;
        if(first == true) {
            val = cur.val;
            c = 1;
            first = false;
        }
        else {
            if(val == cur.val)
                ++c;
            else {
                val = cur.val;
                c = 1; 
            }
        }
        if(c == max)
            res.Add(cur.val);
        else if(c > max) 
        {
                max = c;
                res.Clear();
                res.Add(cur.val);
        }
        InOrder(root.right);
    }
    public int[] FindMode(TreeNode root) {
        res.Clear();
        if(root == null)
            return res.ToArray();
        first = true;
        c = 0;
        val = 0; 
        InOrder(root);
        return res.ToArray();
    }
}

```

## Java Solution

```java

class Solution {
    LinkedList<Integer> res = new LinkedList<>();
    boolean first;
    int val;
    int c;
    int max = -Integer.MAX_VALUE;
    void inOrder(TreeNode root){
        if(root == null)
            return;
        inOrder(root.left);
        TreeNode cur = root;
        if(first == true) {
            val = cur.val;
            c = 1;
            first = false;
        }
        else {
            if(val == cur.val)
                ++c;
            else {
                val = cur.val;
                c = 1; 
            }
        }
        if(c == max)
            res.add(cur.val);
        else if(c > max) 
        {
                max = c;
                res.clear();
                res.add(cur.val);
        }
        inOrder(root.right);
    }

    public int[] findMode(TreeNode root) {
        res.clear();
        if(root == null)
            return res.stream().mapToInt(i->i).toArray();
        first = true;
        c = 0;
        val = 0; 
        inOrder(root);
        return res.stream().mapToInt(i->i).toArray();
    }
}


```

## Python Solution

```python

class Solution:
    def findNodeVal(self, root):
        if root is None:
            return []
        return self.findNodeVal(root.left) + [root.val] + self.findNodeVal(root.right)

    def findMode(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if root is None:
            return []
        vals = self.findNodeVal(root) + [math.inf]
        lastval = vals[0]
        maxcount = 0
        lastindex = 0 
        r = [lastval]
        for i in range(1, len(vals)):
            if vals[i] != lastval:
                count = i - lastindex
                if count > maxcount:
                    r.clear()
                    r.append(lastval)
                    maxcount = count
                    lastindex = i
                elif count == maxcount:
                    r.append(lastval)
                lastindex = i
            lastval = vals[i]
        return r

```





