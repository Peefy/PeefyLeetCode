
# problem 653 : TwoSumBST

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/653.TwoSumBST/problem.png"/>

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
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        inorder(root);
        int left = 0, right = nums.size() - 1;
        while (left < right){
            int sum = nums[left] + nums[right];
            if(sum == k) return true;
            else if(nums[left] + nums[right] < k) left++;
            else right--;
        }
        return false;
    }
private:
    vector<int> nums;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
    }
};

```

## C# Solution

```csharp

public class Solution 
{
    HashSet<int> s = new HashSet<int>();
    public bool FindTarget(TreeNode root, int k) 
    {
        if (root == null)
            return false;
        if (s.Contains(root.val))
            return true;
        else
            s.Add(k - root.val);
        return FindTarget(root.left, k) || FindTarget(root.right, k);
    }
}

```

## Java Solution

```java

class Solution {
    public boolean findTarget(TreeNode root, int k) {
        if (root == null)
            return false;
        LinkedList<TreeNode> queue = new LinkedList<>();
        queue.add(root);
        HashSet<Integer> nums = new HashSet<>();
        while (queue.size() > 0){
            TreeNode node = queue.pollFirst();
            if (nums.contains(k - node.val))
                return true;
            nums.add(node.val);
            if (node.left != null)
                queue.add(node.left);
            if (node.right != null)
                queue.add(node.right);
        }
        return false;
    }
}

```

## Python Solution

```python

class Solution:
    def findTarget(self, root, k):
        """
        :type root: TreeNode
        :type k: int
        :rtype: bool
        """
        def find(root, k):
            if not root:
                return False
            if root.val in s:
                return True
            s.add(k - root.val)
            return find(root.left, k) or find(root.right, k)
        s = set()
        return find(root, k)

```





