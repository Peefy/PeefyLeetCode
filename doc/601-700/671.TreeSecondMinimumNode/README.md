
# problem 671 : TreeSecondMinimumNode

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/671.TreeSecondMinimumNode/problem.png"/>

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
    int min = INT32_MAX;
    int secondMin = -1;
    int findSecondMinimumValue(TreeNode* root) {
        if (root == nullptr) {
            return -1;
        }
        if (root->val < min) {
            if (min != INT32_MAX) {
                secondMin = min;
            }
            min = root->val;
        } else if (root->val > min && (root->val < secondMin || secondMin == -1) ) {
            secondMin = root->val;
        }
        findSecondMinimumValue(root->left);
        findSecondMinimumValue(root->right);
        return secondMin;
    }
};

```

## C# Solution

```csharp

public class Solution {
    int min = int.MaxValue;
    int secondMin = -1;
    public int FindSecondMinimumValue(TreeNode root) {
        if (root == null) {
            return -1;
        }
        if (root.val < min) {
            if (min != int.MaxValue) {
                secondMin = min;
            }
            min = root.val;
        } else if (root.val > min && (root.val < secondMin || secondMin == -1) ) {
            secondMin = root.val;
        }
        FindSecondMinimumValue(root.left);
        FindSecondMinimumValue(root.right);
        return secondMin;
    }
}

```

## Java Solution

```java

class Solution {

    HashSet<Integer> queue;

    public void dfs(TreeNode node){
        if (node == null)
            return;
        queue.add(node.val);
        dfs(node.left);
        dfs(node.right);
    }

    public int findSecondMinimumValue(TreeNode root) {
        queue = new HashSet<>();
        dfs(root);
        int min1 = root.val;
        int res = Integer.MAX_VALUE;
        for (Integer i : queue) {
            if (min1 < i && i < res)
                res = i;
        }
        return res < Integer.MAX_VALUE ? res : -1;
    }
}

```

## Python Solution

```python

class Solution:
    def findSecondMinimumValue(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root is None:
            return -1
        secondmin = 99999999
        queue = [root]
        for q in queue:
            if q.left is not None:
                queue.extend([q.left, q.right])
            if q.val > root.val and q.val < secondmin:
                secondmin = q.val
        return -1 if secondmin == 99999999 else secondmin

```





